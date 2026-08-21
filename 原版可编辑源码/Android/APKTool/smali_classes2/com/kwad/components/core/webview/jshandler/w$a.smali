.class public final Lcom/kwad/components/core/webview/jshandler/w$a;
.super Lcom/kwad/sdk/core/response/a/a;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/kwad/components/core/webview/jshandler/w;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x19
    name = "a"
.end annotation


# instance fields
.field public Uh:Ljava/lang/String;

.field public Ui:I

.field public Uj:Ljava/lang/String;

.field public Uk:I

.field public Ul:I

.field public Um:Ljava/lang/String;

.field public Un:Ljava/lang/String;

.field public Uo:Ljava/lang/String;

.field public Up:I

.field public Uq:Ljava/lang/String;

.field public Ur:I

.field public Us:Ljava/lang/String;

.field public Ut:Ljava/lang/String;

.field public Uu:I

.field public Uv:I

.field public Uw:I

.field public Ux:I

.field public appId:Ljava/lang/String;

.field public appName:Ljava/lang/String;

.field public appVersion:Ljava/lang/String;

.field public model:Ljava/lang/String;


# direct methods
.method public constructor <init>()V
    .locals 0

    invoke-direct {p0}, Lcom/kwad/sdk/core/response/a/a;-><init>()V

    return-void
.end method

.method public static rv()Lcom/kwad/components/core/webview/jshandler/w$a;
    .locals 4

    new-instance v0, Lcom/kwad/components/core/webview/jshandler/w$a;

    invoke-direct {v0}, Lcom/kwad/components/core/webview/jshandler/w$a;-><init>()V

    const-string v1, "3.3.42"

    iput-object v1, v0, Lcom/kwad/components/core/webview/jshandler/w$a;->Uh:Ljava/lang/String;

    const v1, 0x2e4c58

    iput v1, v0, Lcom/kwad/components/core/webview/jshandler/w$a;->Ui:I

    const-class v1, Lcom/kwad/sdk/service/a/e;

    invoke-static {v1}, Lcom/kwad/sdk/service/ServiceProvider;->get(Ljava/lang/Class;)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/kwad/sdk/service/a/e;

    invoke-interface {v1}, Lcom/kwad/sdk/service/a/e;->getApiVersion()Ljava/lang/String;

    move-result-object v1

    iput-object v1, v0, Lcom/kwad/components/core/webview/jshandler/w$a;->Uj:Ljava/lang/String;

    const-class v1, Lcom/kwad/sdk/service/a/e;

    invoke-static {v1}, Lcom/kwad/sdk/service/ServiceProvider;->get(Ljava/lang/Class;)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/kwad/sdk/service/a/e;

    invoke-interface {v1}, Lcom/kwad/sdk/service/a/e;->getApiVersionCode()I

    move-result v1

    iput v1, v0, Lcom/kwad/components/core/webview/jshandler/w$a;->Uk:I

    const/4 v1, 0x1

    iput v1, v0, Lcom/kwad/components/core/webview/jshandler/w$a;->Ul:I

    const-class v2, Lcom/kwad/sdk/service/a/e;

    invoke-static {v2}, Lcom/kwad/sdk/service/ServiceProvider;->get(Ljava/lang/Class;)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Lcom/kwad/sdk/service/a/e;

    invoke-interface {v2}, Lcom/kwad/sdk/service/a/e;->getContext()Landroid/content/Context;

    move-result-object v2

    invoke-static {v2}, Lcom/kwad/sdk/utils/k;->bQ(Landroid/content/Context;)Ljava/lang/String;

    move-result-object v3

    iput-object v3, v0, Lcom/kwad/components/core/webview/jshandler/w$a;->appVersion:Ljava/lang/String;

    const-class v3, Lcom/kwad/sdk/service/a/e;

    invoke-static {v3}, Lcom/kwad/sdk/service/ServiceProvider;->get(Ljava/lang/Class;)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Lcom/kwad/sdk/service/a/e;

    invoke-interface {v3}, Lcom/kwad/sdk/service/a/e;->getAppName()Ljava/lang/String;

    move-result-object v3

    iput-object v3, v0, Lcom/kwad/components/core/webview/jshandler/w$a;->appName:Ljava/lang/String;

    const-class v3, Lcom/kwad/sdk/service/a/e;

    invoke-static {v3}, Lcom/kwad/sdk/service/ServiceProvider;->get(Ljava/lang/Class;)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Lcom/kwad/sdk/service/a/e;

    invoke-interface {v3}, Lcom/kwad/sdk/service/a/e;->getAppId()Ljava/lang/String;

    move-result-object v3

    iput-object v3, v0, Lcom/kwad/components/core/webview/jshandler/w$a;->appId:Ljava/lang/String;

    invoke-static {v2}, Lcom/kwad/sdk/utils/ag;->cj(Landroid/content/Context;)I

    move-result v3

    invoke-static {v3}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v3

    iput-object v3, v0, Lcom/kwad/components/core/webview/jshandler/w$a;->Um:Ljava/lang/String;

    invoke-static {}, Lcom/kwad/sdk/utils/be;->JS()Ljava/lang/String;

    move-result-object v3

    iput-object v3, v0, Lcom/kwad/components/core/webview/jshandler/w$a;->Un:Ljava/lang/String;

    invoke-static {}, Lcom/kwad/sdk/utils/be;->JJ()Ljava/lang/String;

    move-result-object v3

    iput-object v3, v0, Lcom/kwad/components/core/webview/jshandler/w$a;->model:Ljava/lang/String;

    invoke-static {}, Lcom/kwad/sdk/utils/be;->JL()Ljava/lang/String;

    move-result-object v3

    iput-object v3, v0, Lcom/kwad/components/core/webview/jshandler/w$a;->Uo:Ljava/lang/String;

    iput v1, v0, Lcom/kwad/components/core/webview/jshandler/w$a;->Up:I

    invoke-static {}, Lcom/kwad/sdk/utils/be;->getOsVersion()Ljava/lang/String;

    move-result-object v1

    iput-object v1, v0, Lcom/kwad/components/core/webview/jshandler/w$a;->Uq:Ljava/lang/String;

    invoke-static {}, Lcom/kwad/sdk/utils/be;->JV()I

    move-result v1

    iput v1, v0, Lcom/kwad/components/core/webview/jshandler/w$a;->Ur:I

    invoke-static {}, Lcom/kwad/sdk/utils/be;->getLanguage()Ljava/lang/String;

    move-result-object v1

    iput-object v1, v0, Lcom/kwad/components/core/webview/jshandler/w$a;->Us:Ljava/lang/String;

    invoke-static {}, Lcom/kwad/sdk/utils/be;->getLocale()Ljava/lang/String;

    move-result-object v1

    iput-object v1, v0, Lcom/kwad/components/core/webview/jshandler/w$a;->Ut:Ljava/lang/String;

    invoke-static {v2}, Lcom/kwad/sdk/utils/be;->getScreenWidth(Landroid/content/Context;)I

    move-result v1

    iput v1, v0, Lcom/kwad/components/core/webview/jshandler/w$a;->Uu:I

    invoke-static {v2}, Lcom/kwad/sdk/utils/be;->getScreenHeight(Landroid/content/Context;)I

    move-result v1

    iput v1, v0, Lcom/kwad/components/core/webview/jshandler/w$a;->Uv:I

    invoke-static {v2}, Lcom/kwad/sdk/d/a/a;->getStatusBarHeight(Landroid/content/Context;)I

    move-result v1

    iput v1, v0, Lcom/kwad/components/core/webview/jshandler/w$a;->Uw:I

    const/high16 v1, 0x42480000    # 50.0f

    invoke-static {v2, v1}, Lcom/kwad/sdk/d/a/a;->a(Landroid/content/Context;F)I

    move-result v1

    iput v1, v0, Lcom/kwad/components/core/webview/jshandler/w$a;->Ux:I

    return-object v0
.end method
