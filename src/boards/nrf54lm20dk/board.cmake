set(MCU_VARIANT nrf54lm20a)
# The DK carries an nRF54LM20B: the build targets the A, but the errata checks in the MDK only
# match the B's FICR (0x33 at 0x00FFC340) with this, so the B's workarounds get applied.
add_compile_definitions(DEVELOP_IN_NRF54LM20B)
