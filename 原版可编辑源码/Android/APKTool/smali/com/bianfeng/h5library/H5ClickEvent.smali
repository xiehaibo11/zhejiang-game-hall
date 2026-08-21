.class Lcom/bianfeng/h5library/H5ClickEvent;
.super Ljava/lang/Object;
.source "H5ClickEvent.java"


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/bianfeng/h5library/H5ClickEvent$AppEventsBean;,
        Lcom/bianfeng/h5library/H5ClickEvent$DeviceProfileBean;,
        Lcom/bianfeng/h5library/H5ClickEvent$AppProfileBean;
    }
.end annotation


# instance fields
.field private appEvents:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Lcom/bianfeng/h5library/H5ClickEvent$AppEventsBean;",
            ">;"
        }
    .end annotation
.end field

.field private appKey:Ljava/lang/String;

.field private appProfile:Lcom/bianfeng/h5library/H5ClickEvent$AppProfileBean;

.field private clientType:Ljava/lang/String;

.field private deviceProfile:Lcom/bianfeng/h5library/H5ClickEvent$DeviceProfileBean;

.field private groupId:Ljava/lang/String;


# direct methods
.method public constructor <init>(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V
    .locals 11

    move-object v0, p0

    .line 19
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const-string v1, "426"

    .line 16
    iput-object v1, v0, Lcom/bianfeng/h5library/H5ClickEvent;->groupId:Ljava/lang/String;

    const-string v1, "14"

    .line 17
    iput-object v1, v0, Lcom/bianfeng/h5library/H5ClickEvent;->clientType:Ljava/lang/String;

    move-object v1, p1

    .line 20
    iput-object v1, v0, Lcom/bianfeng/h5library/H5ClickEvent;->appKey:Ljava/lang/String;

    .line 21
    new-instance v1, Lcom/bianfeng/h5library/H5ClickEvent$AppProfileBean;

    invoke-direct {v1}, Lcom/bianfeng/h5library/H5ClickEvent$AppProfileBean;-><init>()V

    iput-object v1, v0, Lcom/bianfeng/h5library/H5ClickEvent;->appProfile:Lcom/bianfeng/h5library/H5ClickEvent$AppProfileBean;

    .line 22
    new-instance v1, Lcom/bianfeng/h5library/H5ClickEvent$DeviceProfileBean;

    invoke-direct {v1}, Lcom/bianfeng/h5library/H5ClickEvent$DeviceProfileBean;-><init>()V

    iput-object v1, v0, Lcom/bianfeng/h5library/H5ClickEvent;->deviceProfile:Lcom/bianfeng/h5library/H5ClickEvent$DeviceProfileBean;

    .line 23
    new-instance v1, Ljava/util/ArrayList;

    invoke-direct {v1}, Ljava/util/ArrayList;-><init>()V

    iput-object v1, v0, Lcom/bianfeng/h5library/H5ClickEvent;->appEvents:Ljava/util/List;

    .line 24
    new-instance v10, Lcom/bianfeng/h5library/H5ClickEvent$AppEventsBean;

    move-object v2, v10

    move-object v3, p4

    move-object v4, p3

    move-object/from16 v5, p6

    move-object/from16 v6, p5

    move-object/from16 v7, p7

    move-object/from16 v8, p8

    move-object v9, p2

    invoke-direct/range {v2 .. v9}, Lcom/bianfeng/h5library/H5ClickEvent$AppEventsBean;-><init>(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    invoke-interface {v1, v10}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    return-void
.end method


# virtual methods
.method public toString()Ljava/lang/String;
    .locals 1

    .line 28
    invoke-static {p0}, Lcom/bianfeng/h5library/utils/H5libGsonUtils;->toJson(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method
