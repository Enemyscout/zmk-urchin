/* Copyright 2015-2016 Jack Humbert
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

#include <dt-bindings/zmk/hid_usage.h>
#include <dt-bindings/zmk/hid_usage_pages.h>
#include <dt-bindings/zmk/modifiers.h>
#include <dt-bindings/zmk/keys.h>

// clang-format off

// Aliases
#define DE_CIRC GRAVE  // ^ (dead)
#define DE_1    N1    // 1
#define DE_2    N2    // 2
#define DE_3    N3    // 3
#define DE_4    N4    // 4
#define DE_5    N5    // 5
#define DE_6    N6    // 6
#define DE_7    N7    // 7
#define DE_8    N8    // 8
#define DE_9    N9    // 9
#define DE_0    N0    // 0
#define DE_SS   MINUS // ß
#define DE_ACUT EQUAL  // ´ (dead)
#define DE_Q    Q    // Q
#define DE_W    W    // W
#define DE_E    E    // E
#define DE_R    R    // R
#define DE_T    T    // T
#define DE_Z    Y    // Z
#define DE_U    U    // U
#define DE_I    I    // I
#define DE_O    O    // O
#define DE_P    P    // P
#define DE_UDIA LBKT // Ü
#define DE_PLUS RBKT // +
#define DE_A    A    // A
#define DE_S    S    // S
#define DE_D    D    // D
#define DE_F    F    // F
#define DE_G    G    // G
#define DE_H    H    // H
#define DE_J    J    // J
#define DE_K    K    // K
#define DE_L    L    // L
#define DE_ODIA SCLN // Ö
#define DE_ADIA SQT // Ä
#define DE_HASH NUHS // #
#define DE_LABK NUBS // <
#define DE_Y    Z    // Y
#define DE_X    X    // X
#define DE_C    C    // C
#define DE_V    V    // V
#define DE_B    B    // B
#define DE_N    N    // N
#define DE_M    M    // M
#define DE_COMMA COMMA // ,
#define DE_DOT  DOT  // .
#define DE_MINUS SLASH // -
#define DE_DEG  LS(DE_CIRC) // °
#define DE_EXLM LS(DE_1)    // !
#define DE_DQUO LS(DE_2)    // "
#define DE_SECT LS(DE_3)    // §
#define DE_DLR  LS(DE_4)    // $
#define DE_PERC LS(DE_5)    // %
#define DE_AMPR LS(DE_6)    // &
#define DE_SLSH LS(DE_7)    // /
#define DE_LPRN LS(DE_8)    // (
#define DE_RPRN LS(DE_9)    // )
#define DE_EQL  LS(DE_0)    // =
#define DE_QUES LS(DE_SS)   // ?
#define DE_GRV  LS(DE_ACUT) // ` (dead)
#define DE_ASTR LS(DE_PLUS) // *
#define DE_QUOT LS(DE_HASH) // '
#define DE_RABK LS(DE_LABK) // >
#define DE_SCLN LS(DE_COMMA) // ;
#define DE_COLN LS(DE_DOT)  // :
#define DE_UNDS LS(DE_MINUS) // _
#define DE_SUP2 RA(DE_2)    // ²
#define DE_SUP3 RA(DE_3)    // ³
#define DE_LCBR RA(DE_7)    // {
#define DE_LBRC RA(DE_8)    // [
#define DE_RBRC RA(DE_9)    // ]
#define DE_RCBR RA(DE_0)    // }
#define DE_BSLS RA(DE_SS)   // (backslash)
#define DE_AT   RA(DE_Q)    // @
#define DE_EURO RA(DE_E)    // €
#define DE_TILD RA(DE_PLUS) // ~
#define DE_PIPE RA(DE_LABK) // |
#define DE_MICR RA(DE_M)    // µ
#define DE_3FS LA(RC(DEL))  // 3 Finger Salute
#define DE_AAT RA(L)  // Apple AT
#define DE_APIPE LA(DE_CIRC) // Apple PIPE
#define DE_COPY LC(C) // copy
#define DE_CUT LC(X)  // cut
#define DE_PASTE LC(V) // paste
#define PSPACE LC(LS(SPACE)) // protected space
#define PMINUS LS(LC(DE_MINUS)) // protected minus
#define OMINUS LC(DE_MINUS) // optionale trennstelle 
#define PENTER LS(ENTER) // enter ohne neuen absatz
