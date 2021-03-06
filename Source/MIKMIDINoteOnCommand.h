//
//  MIKMIDINoteOnCommand.h
//  MIDI Testbed
//
//  Created by Andrew Madsen on 6/2/13.
//  Copyright (c) 2013 Mixed In Key. All rights reserved.
//

#import "MIKMIDIChannelVoiceCommand.h"

@interface MIKMIDINoteOnCommand : MIKMIDIChannelVoiceCommand

@property (nonatomic, readonly) NSUInteger note;
@property (nonatomic, readonly) NSUInteger velocity;

@end

@interface MIKMutableMIDINoteOnCommand : MIKMIDINoteOnCommand

@property (nonatomic, readwrite) UInt8 channel;
@property (nonatomic, readwrite) NSUInteger value;

@property (nonatomic, readwrite) NSUInteger note;
@property (nonatomic, readwrite) NSUInteger velocity;

@end
