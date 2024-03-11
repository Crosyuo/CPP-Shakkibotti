#pragma once

// Pelaajat.
enum { VALKEA, MUSTA };

// Vakioarvot eri nappululoille (NA = tyhj� ruutu).
enum { wR, wN, wB, wQ, wK, wP, bR, bN, bB, bQ, bK, bP, NA};

// Palauttaa annetun nappulan v�rin (VALKEA, MUSTA).
int nappulan_vari(int nappula);

// Palautetaan vastustaja
int vastustaja(int pelaaja);