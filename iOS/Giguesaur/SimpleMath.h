/*
    File: SimpleMath.h
    Author: Ashley Manson
 
    Some simple Math stuff that is used alot.
 */

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "Giguesaur/Piece.h"

#define PI 3.141592653
#define degToRad(DEG) (float)(DEG * PI / 180.0)
#define radToDeg(RAD) (float)(RAD * 180.0 / PI)

typedef enum {P_UP, P_DOWN, P_LEFT, P_RIGHT} pieceSide;

@interface SimpleMath : NSObject

// Get the rotated corner points of a piece
- (NSArray*) pointsRotated: (Piece) piece;

// Get the distance of two pieces
- (NSArray*) distanceBetweenPiece: (Piece) originalPiece
                    andOtherPiece: (Piece) otherPiece
                        whichSide: (pieceSide) sideToCompare;

// Get new coordinates for a piece being snaped to another piece
- (CGPoint) newCoordinates: (Piece) neighbourPiece
                 whichSide: (pieceSide) sideOfNeighbour;
@end
