#include "NWNXFuncs.h"

void Func_SetIsStatic(CGameObject* ob, char* value)
{
    CNWSPlaceable* plc;

    if (ob == NULL                                     ||
            (plc = ob->vtable->AsNWSPlaceable(ob)) == NULL) {

        snprintf(value, strlen(value), "-1");
        return;
    }

    // printf("SetStatic on PLC, never_static: %d\n", plc->plc_never_static);

    int stat = atoi(value) > 0 ? 1 : 0;
    plc->plc_static = stat;
    plc->plc_bodybag = stat;
    plc->plc_never_static = !stat;

    snprintf(value, strlen(value), "%d", plc->plc_static);
}
