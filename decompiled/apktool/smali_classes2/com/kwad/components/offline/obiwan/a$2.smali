.class final Lcom/kwad/components/offline/obiwan/a$2;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/kwad/components/core/p/f$a;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/components/offline/obiwan/a;->b(Landroid/content/Context;Ljava/lang/ClassLoader;)Z
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic Zu:Lcom/kwad/components/offline/obiwan/a;

.field final synthetic Zv:Lcom/kwad/components/offline/obiwan/ObiwanComponentsImpl;


# direct methods
.method constructor <init>(Lcom/kwad/components/offline/obiwan/a;Lcom/kwad/components/offline/obiwan/ObiwanComponentsImpl;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/offline/obiwan/a$2;->Zu:Lcom/kwad/components/offline/obiwan/a;

    iput-object p2, p0, Lcom/kwad/components/offline/obiwan/a$2;->Zv:Lcom/kwad/components/offline/obiwan/ObiwanComponentsImpl;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method private updateConfigs()V
    .locals 2

    sget-object v0, Lcom/kwad/sdk/core/config/c;->alR:Lcom/kwad/sdk/core/config/item/d;

    invoke-static {v0}, Lcom/kwad/sdk/core/config/d;->a(Lcom/kwad/sdk/core/config/item/d;)Z

    move-result v0

    if-eqz v0, :cond_0

    new-instance v0, Lcom/kwad/components/offline/obiwan/b;

    iget-object v1, p0, Lcom/kwad/components/offline/obiwan/a$2;->Zv:Lcom/kwad/components/offline/obiwan/ObiwanComponentsImpl;

    invoke-virtual {v1}, Lcom/kwad/components/offline/obiwan/ObiwanComponentsImpl;->getLog()Lcom/kwad/components/offline/api/obiwan/IObiwanLogcat;

    move-result-object v1

    invoke-direct {v0, v1}, Lcom/kwad/components/offline/obiwan/b;-><init>(Lcom/kwad/components/offline/api/obiwan/IObiwanLogcat;)V

    goto :goto_0

    :cond_0
    const/4 v0, 0x0

    :goto_0
    invoke-static {v0}, Lcom/kwad/sdk/core/e/c;->a(Lcom/kwad/sdk/core/e/a/b;)V

    iget-object v0, p0, Lcom/kwad/components/offline/obiwan/a$2;->Zv:Lcom/kwad/components/offline/obiwan/ObiwanComponentsImpl;

    invoke-virtual {v0}, Lcom/kwad/components/offline/obiwan/ObiwanComponentsImpl;->updateConfigs()V

    return-void
.end method


# virtual methods
.method public final a(Lcom/kwad/sdk/core/response/model/SdkConfigData;)V
    .locals 0

    invoke-direct {p0}, Lcom/kwad/components/offline/obiwan/a$2;->updateConfigs()V

    return-void
.end method

.method public final on()V
    .locals 0

    invoke-direct {p0}, Lcom/kwad/components/offline/obiwan/a$2;->updateConfigs()V

    return-void
.end method
