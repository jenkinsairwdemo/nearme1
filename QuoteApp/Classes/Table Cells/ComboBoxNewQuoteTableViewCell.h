//
//  ComboBoxNewQuoteTableViewCell.h
//  QuoteApp
//
//  Created by Pavel Vilbik on 17.2.14.
//  Copyright (c) 2014 Kinvey, Inc. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef enum {
    ProductCellIndex = 0,
	ActiveUserCellIndex,
	BusinessLogicScriptsCellIndex,
	ScheduledBusinessLogicCellIndex,
    CollaboratorsCellIndex,
    BackendEnviromentsCellIndex,
    DataStoregeCellIndex,
    BusinessLogicExecutionTimeLimitCellIndex,
    StartSubscriptionDateCellIndex
} CellIndex;

#define PLACEHOLDER_PRODUCT_TEXT_FIELD LOC(NQV_PLACEHOLDER_PRODUCT)
#define PLACEHOLDER_ACTIVE_USER_TEXT_FIELD LOC(NQV_PLACEHOLDER_ACTIVE_USER)
#define PLACEHOLDER_BUSINESS_LOGIC_SCRIPTS_TEXT_FIELD LOC(NQV_PLACEHOLDER_BUSINESS_LOGIC_SCRIPTS)
#define PLACEHOLDER_SCHEDULED_BUSINESS_LOGIC_TEXT_FIELD LOC(NQV_PLACEHOLDER_SCHEDULED_BUSINESS_LOGIC)
#define PLACEHOLDER_COLLABORATORS_TEXT_FIELD LOC(NQV_PLACEHOLDER_COLLABORATORS)
#define PLACEHOLDER_BACKEND_ENVIROMENTS_TEXT_FIELD LOC(NQV_PLACEHOLDER_BACKEND_ENVIROMENTS)
#define PLACEHOLDER_DATA_STOREGE_TEXT_FIELD LOC(NQV_PLACEHOLDER_DATA_STOREGE)
#define PLACEHOLDER_BUSINESS_LOGIC_EXECUTION_TIME_LIMIT_TEXT_FIELD LOC(NQV_PLACEHOLDER_BUSINESS_LOGIC_EXECUTION_TIME_LIMIT)
#define PLACEHOLDER_START_SUBSCRIPTION_DATE_TEXT_FIELD LOC(NQV_PLACEHOLDER_START_SUBSCRIPTION_DATE)

#define IMAGE_NAME_LIST_BUTTON @"ListButton"
#define IMAGE_NAME_CALENDAR_BUTTON @"CalendarButton"


@interface ComboBoxNewQuoteTableViewCell : UITableViewCell

@property (strong, nonatomic) IBOutlet UIView *view;
@property (weak, nonatomic) IBOutlet UITextField *textField;


@property (nonatomic) NSInteger index;

@end
