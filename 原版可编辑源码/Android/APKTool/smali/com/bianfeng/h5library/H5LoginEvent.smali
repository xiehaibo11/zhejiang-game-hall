.class Lcom/bianfeng/h5library/H5LoginEvent;
.super Ljava/lang/Object;
.source "H5LoginEvent.java"


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/bianfeng/h5library/H5LoginEvent$AppEventsBean;
    }
.end annotation


# instance fields
.field private appEvents:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Lcom/bianfeng/h5library/H5LoginEvent$AppEventsBean;",
            ">;"
        }
    .end annotation
.end field

.field private appKey:Ljava/lang/String;

.field private clientType:Ljava/lang/String;

.field private groupId:Ljava/lang/String;

.field private loginType:Ljava/lang/String;


# direct methods
.method public constructor <init>(Ljava/lang/String;Lcom/bianfeng/h5library/H5LoginEvent$AppEventsBean;)V
    .locals 1

    .line 17
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const-string v0, "14"

    .line 12
    iput-object v0, p0, Lcom/bianfeng/h5library/H5LoginEvent;->clientType:Ljava/lang/String;

    const-string v0, "426"

    .line 13
    iput-object v0, p0, Lcom/bianfeng/h5library/H5LoginEvent;->groupId:Ljava/lang/String;

    const-string v0, "loginGame"

    .line 14
    iput-object v0, p0, Lcom/bianfeng/h5library/H5LoginEvent;->loginType:Ljava/lang/String;

    .line 18
    iput-object p1, p0, Lcom/bianfeng/h5library/H5LoginEvent;->appKey:Ljava/lang/String;

    .line 19
    new-instance p1, Ljava/util/ArrayList;

    invoke-direct {p1}, Ljava/util/ArrayList;-><init>()V

    iput-object p1, p0, Lcom/bianfeng/h5library/H5LoginEvent;->appEvents:Ljava/util/List;

    .line 20
    invoke-interface {p1, p2}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    return-void
.end method


# virtual methods
.method public toString()Ljava/lang/String;
    .locals 1

    .line 24
    invoke-static {p0}, Lcom/bianfeng/h5library/utils/H5libGsonUtils;->toJson(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method
