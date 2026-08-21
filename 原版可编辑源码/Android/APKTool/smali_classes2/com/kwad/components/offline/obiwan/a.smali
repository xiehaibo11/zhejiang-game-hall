.class public final Lcom/kwad/components/offline/obiwan/a;
.super Lcom/kwad/components/core/offline/init/a;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/kwad/components/offline/obiwan/a$a;
    }
.end annotation


# direct methods
.method private constructor <init>()V
    .locals 0

    invoke-direct {p0}, Lcom/kwad/components/core/offline/init/a;-><init>()V

    return-void
.end method

.method synthetic constructor <init>(B)V
    .locals 0

    invoke-direct {p0}, Lcom/kwad/components/offline/obiwan/a;-><init>()V

    return-void
.end method

.method static synthetic a(Lcom/kwad/components/offline/obiwan/a;)V
    .locals 0

    invoke-virtual {p0}, Lcom/kwad/components/offline/obiwan/a;->om()V

    return-void
.end method

.method public static am(Landroid/content/Context;)V
    .locals 1

    invoke-static {}, Lcom/kwad/components/offline/obiwan/a;->sJ()Lcom/kwad/components/offline/obiwan/a;

    move-result-object v0

    invoke-virtual {v0, p0}, Lcom/kwad/components/offline/obiwan/a;->init(Landroid/content/Context;)V

    return-void
.end method

.method private static sJ()Lcom/kwad/components/offline/obiwan/a;
    .locals 1

    invoke-static {}, Lcom/kwad/components/offline/obiwan/a$a;->sK()Lcom/kwad/components/offline/obiwan/a;

    move-result-object v0

    return-object v0
.end method


# virtual methods
.method public final b(Landroid/content/Context;Ljava/lang/ClassLoader;)Z
    .locals 4

    const-string v0, "com.kwad.sdk.core.log.ObiwanOfflineCompoImpl"

    invoke-virtual {p0, p2, v0}, Lcom/kwad/components/offline/obiwan/a;->a(Ljava/lang/ClassLoader;Ljava/lang/String;)Lcom/kwad/components/offline/api/IOfflineCompo;

    move-result-object p2

    check-cast p2, Lcom/kwad/components/offline/api/obiwan/IObiwanOfflineCompo;

    if-nez p2, :cond_0

    const/4 p1, 0x0

    return p1

    :cond_0
    new-instance v0, Lcom/kwad/components/offline/obiwan/ObiwanComponentsImpl;

    invoke-direct {v0, p2}, Lcom/kwad/components/offline/obiwan/ObiwanComponentsImpl;-><init>(Lcom/kwad/components/offline/api/obiwan/IObiwanOfflineCompo;)V

    const-class v1, Lcom/kwad/components/core/offline/api/obiwan/ObiwanComponents;

    invoke-static {v1, v0}, Lcom/kwad/sdk/components/c;->a(Ljava/lang/Class;Lcom/kwad/sdk/components/a;)V

    invoke-virtual {p0}, Lcom/kwad/components/offline/obiwan/a;->getTag()Ljava/lang/String;

    move-result-object v1

    const-string v2, "offlineComponent load success"

    invoke-static {v1, v2}, Lcom/kwad/sdk/core/e/c;->i(Ljava/lang/String;Ljava/lang/String;)V

    invoke-static {}, Lcom/kwad/sdk/service/ServiceProvider;->HE()Lcom/kwad/sdk/api/SdkConfig;

    move-result-object v1

    new-instance v2, Lcom/kwad/components/offline/obiwan/c;

    invoke-direct {v2}, Lcom/kwad/components/offline/obiwan/c;-><init>()V

    new-instance v3, Lcom/kwad/components/offline/obiwan/a$1;

    invoke-direct {v3, p0}, Lcom/kwad/components/offline/obiwan/a$1;-><init>(Lcom/kwad/components/offline/obiwan/a;)V

    invoke-interface {p2, p1, v1, v2, v3}, Lcom/kwad/components/offline/api/obiwan/IObiwanOfflineCompo;->initReal(Landroid/content/Context;Lcom/kwad/sdk/api/SdkConfig;Lcom/kwad/components/offline/api/obiwan/IObiwanOfflineCompoInitConfig;Lcom/kwad/components/offline/api/InitCallBack;)V

    new-instance p1, Lcom/kwad/components/offline/obiwan/b;

    invoke-virtual {v0}, Lcom/kwad/components/offline/obiwan/ObiwanComponentsImpl;->getLog()Lcom/kwad/components/offline/api/obiwan/IObiwanLogcat;

    move-result-object p2

    invoke-direct {p1, p2}, Lcom/kwad/components/offline/obiwan/b;-><init>(Lcom/kwad/components/offline/api/obiwan/IObiwanLogcat;)V

    invoke-static {p1}, Lcom/kwad/sdk/core/e/c;->a(Lcom/kwad/sdk/core/e/a/b;)V

    new-instance p1, Lcom/kwad/components/offline/obiwan/a$2;

    invoke-direct {p1, p0, v0}, Lcom/kwad/components/offline/obiwan/a$2;-><init>(Lcom/kwad/components/offline/obiwan/a;Lcom/kwad/components/offline/obiwan/ObiwanComponentsImpl;)V

    invoke-static {p1}, Lcom/kwad/components/core/p/f;->a(Lcom/kwad/components/core/p/f$a;)V

    const/4 p1, 0x1

    return p1
.end method

.method public final getTag()Ljava/lang/String;
    .locals 1

    const-string v0, "ObiwanInitModule"

    return-object v0
.end method

.method public final isEnabled()Z
    .locals 1

    sget-object v0, Lcom/kwad/sdk/core/config/c;->alR:Lcom/kwad/sdk/core/config/item/d;

    invoke-static {v0}, Lcom/kwad/sdk/core/config/d;->b(Lcom/kwad/sdk/core/config/item/b;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/lang/Boolean;

    invoke-virtual {v0}, Ljava/lang/Boolean;->booleanValue()Z

    move-result v0

    return v0
.end method

.method public final oe()I
    .locals 1

    const/4 v0, 0x3

    return v0
.end method

.method public final oh()Ljava/lang/String;
    .locals 1

    const-string v0, "com.kwad.components.obiwan"

    return-object v0
.end method

.method public final oi()Ljava/lang/String;
    .locals 1

    const-string v0, "3.3.40"

    return-object v0
.end method

.method public final oj()Ljava/lang/String;
    .locals 1

    const-string v0, "https://p1-lm.adkwai.com/udata/pkg/KS-Android-KSAdSDk/offline_components/obiwan/ks_so-obiwanNoSoRelease-3.3.40-c04ae50398-273.zip"

    return-object v0
.end method

.method public final ok()Ljava/lang/String;
    .locals 1

    const-string v0, "68b663dbb3f66e09d06aa0753d724710"

    return-object v0
.end method

.method public final ol()Ljava/lang/String;
    .locals 1

    const-string v0, "ks_obiwan_773cd6541"

    return-object v0
.end method
