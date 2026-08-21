.class public Lcom/bianfeng/h5library/H5ClickEvent$AppProfileBean;
.super Ljava/lang/Object;
.source "H5ClickEvent.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/bianfeng/h5library/H5ClickEvent;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x9
    name = "AppProfileBean"
.end annotation


# instance fields
.field private appPackageName:Ljava/lang/String;

.field private appType:Ljava/lang/String;

.field private appVersionName:Ljava/lang/String;

.field private sdkVersion:Ljava/lang/String;


# direct methods
.method public constructor <init>()V
    .locals 1

    .line 37
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 32
    invoke-static {}, Lcom/bianfeng/h5library/utils/H5libAppContext;->getVerName()Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/bianfeng/h5library/H5ClickEvent$AppProfileBean;->appVersionName:Ljava/lang/String;

    const-string v0, "1"

    .line 33
    iput-object v0, p0, Lcom/bianfeng/h5library/H5ClickEvent$AppProfileBean;->appType:Ljava/lang/String;

    .line 34
    invoke-static {}, Lcom/bianfeng/h5library/utils/H5libAppContext;->getPkgName()Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/bianfeng/h5library/H5ClickEvent$AppProfileBean;->appPackageName:Ljava/lang/String;

    .line 35
    invoke-static {}, Lcom/bianfeng/h5library/utils/H5libAppContext;->getSdkVersion()Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/bianfeng/h5library/H5ClickEvent$AppProfileBean;->sdkVersion:Ljava/lang/String;

    return-void
.end method


# virtual methods
.method public toString()Ljava/lang/String;
    .locals 1

    .line 41
    invoke-static {p0}, Lcom/bianfeng/h5library/utils/H5libGsonUtils;->toJson(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method
