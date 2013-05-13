//
//  POIViewController.h
//  POI
//
//  Created by JerryTaylorKendrick on 4/25/13.
//  Copyright (c) 2013 DeanAMH. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreLocation/CoreLocation.h>
#import <MapKit/MapKit.h>
#import <Slt/Slt.h>
#import <OpenEars/FliteController.h>

FliteController *fliteController;
Slt *slt;

@interface POIViewController : UIViewController<MKMapViewDelegate,CLLocationManagerDelegate>

@property (strong, nonatomic) FliteController *fliteController;
@property (strong, nonatomic) Slt *slt;
@property (weak, nonatomic) IBOutlet MKMapView *mapView;

- (IBAction)updateButton:(id)sender;
//- (void)mapView:(MKMapView *)siteMap didSelectAnnotationView:(MKAnnotationView *)annotationView;
//- (MKAnnotationView *)mapView:(MKMapView *)mapView viewForAnnotation:(id <MKAnnotation> )annotation;

@end