.class Lcom/bianfeng/h5library/H5RegisterEvent;
.super Ljava/lang/Object;
.source "H5RegisterEvent.java"


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/bianfeng/h5library/H5RegisterEvent$AppEventsBean;
    }
.end annotation


# instance fields
.field private appEvents:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Lcom/bianfeng/h5library/H5RegisterEvent$AppEventsBean;",
            ">;"
        }
    .end annotation
.end field

.field private appKey:Ljava/lang/String;

.field private clientType:Ljava/lang/String;

.field private groupId:Ljava/lang/String;


# direct methods
.method public constructor <init>(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V
    .locals 1

    .line 19
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const-string v0, "426"

    .line 13
    iput-object v0, p0, Lcom/bianfeng/h5library/H5RegisterEvent;->groupId:Ljava/lang/String;

    const-string v0, "14"

    .line 15
    iput-object v0, p0, Lcom/bianfeng/h5library/H5RegisterEvent;->clientType:Ljava/lang/String;

    .line 20
    iput-object p1, p0, Lcom/bianfeng/h5library/H5RegisterEvent;->appKey:Ljava/lang/String;

    .line 21
    new-instance p1, Ljava/util/ArrayList;

    invoke-direct {p1}, Ljava/util/ArrayList;-><init>()V

    iput-object p1, p0, Lcom/bianfeng/h5library/H5RegisterEvent;->appEvents:Ljava/util/List;

    .line 22
    new-instance v0, Lcom/bianfeng/h5library/H5RegisterEvent$AppEventsBean;

    invoke-direct {v0, p2, p3, p4, p5}, Lcom/bianfeng/h5library/H5RegisterEvent$AppEventsBean;-><init>(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    invoke-interface {p1, v0}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    return-void
.end method


# virtual methods
.method public toString()Ljava/lang/String;
    .locals 1

    .line 26
    invoke-static {p0}, Lcom/bianfeng/h5library/utils/H5libGsonUtils;->toJson(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method
