#include "main/rng.h"

u32 g_RngSeed = 0;

u32 Rng_Rand32()
{
    u32 nextSeed = g_RngSeed;

    nextSeed  = (nextSeed * 1664525) + 1013904223;
    g_RngSeed = nextSeed;

    return nextSeed;
}

u32 Rng_Rand16()
{
    return Rng_Rand32() >> 17;
}

u32 Rng_GetSeed()
{
    return g_RngSeed;
}

void Rng_SetSeed(u32 nextSeed)
{
    g_RngSeed = nextSeed;
}

u16 Rng_Rand12()
{
    return Rng_Rand32() >> 20;
}
