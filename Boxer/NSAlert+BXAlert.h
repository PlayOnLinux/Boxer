/* 
 Boxer is copyright 2009 Alun Bestor and contributors.
 Boxer is released under the GNU General Public License 2.0. A full copy of this license can be
 found in this XCode project at Resources/English.lproj/GNU General Public License.txt, or read
 online at [http://www.gnu.org/licenses/gpl-2.0.txt].
 */


//The BXAlert category provides some convenience methods for alerts.

#import <Cocoa/Cocoa.h>

@interface NSAlert (BXAlert)

//Returns a non-retained NSAlert instance.
+ (id) alert;

//Set the alert's icon to the represented icon of the specified window.
//Returns YES if the window had a specific icon, NO otherwise.
- (BOOL) adoptIconFromWindow: (NSWindow *)window;

@end