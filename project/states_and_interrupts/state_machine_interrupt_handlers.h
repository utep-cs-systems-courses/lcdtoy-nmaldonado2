// Nichole Maldonado
// This is the header file for state_machine_interrupt_handlers.c
// which determines which function to call to
// handle the interrupt based on the game number
// and therefore based on the current state.

#ifndef stateMachineInterruptHandlers_included
#define stateMachineInterruptHandlers_included

extern char game_num;
extern char game_changed;

// Interrupt handlers for the corresponding
// game numbers.

// Interrupt handler for end screen
void end_interrupt_handler();

// Interrupt handler for catch red.
void game_three_interrupt_handler();

// Interrupt handler for Fur Elise.
void game_one_interrupt_handler();

#endif // included
