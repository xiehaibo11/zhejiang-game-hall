.class public final Lcom/kwad/sdk/m/f;
.super Landroid/app/Application;

# interfaces
.implements Lcom/kwad/sdk/m/a;


# instance fields
.field private final aMF:Landroid/app/Application;

.field private final aMG:Lcom/kwad/sdk/m/g;


# direct methods
.method public constructor <init>(Landroid/app/Application;Lcom/kwad/sdk/m/g;)V
    .locals 0

    invoke-direct {p0}, Landroid/app/Application;-><init>()V

    iput-object p1, p0, Lcom/kwad/sdk/m/f;->aMF:Landroid/app/Application;

    iput-object p2, p0, Lcom/kwad/sdk/m/f;->aMG:Lcom/kwad/sdk/m/g;

    invoke-virtual {p0, p2}, Lcom/kwad/sdk/m/f;->attachBaseContext(Landroid/content/Context;)V

    return-void
.end method


# virtual methods
.method public final getApplicationContext()Landroid/content/Context;
    .locals 1

    iget-object v0, p0, Lcom/kwad/sdk/m/f;->aMG:Lcom/kwad/sdk/m/g;

    invoke-virtual {v0}, Lcom/kwad/sdk/m/g;->getApplicationContext()Landroid/content/Context;

    move-result-object v0

    return-object v0
.end method

.method public final getClassLoader()Ljava/lang/ClassLoader;
    .locals 1

    iget-object v0, p0, Lcom/kwad/sdk/m/f;->aMG:Lcom/kwad/sdk/m/g;

    invoke-virtual {v0}, Lcom/kwad/sdk/m/g;->getClassLoader()Ljava/lang/ClassLoader;

    move-result-object v0

    return-object v0
.end method

.method public final getDelegatedContext()Landroid/content/Context;
    .locals 1

    iget-object v0, p0, Lcom/kwad/sdk/m/f;->aMF:Landroid/app/Application;

    return-object v0
.end method

.method public final getResources()Landroid/content/res/Resources;
    .locals 1

    iget-object v0, p0, Lcom/kwad/sdk/m/f;->aMG:Lcom/kwad/sdk/m/g;

    invoke-virtual {v0}, Lcom/kwad/sdk/m/g;->getResources()Landroid/content/res/Resources;

    move-result-object v0

    return-object v0
.end method

.method public final startActivity(Landroid/content/Intent;)V
    .locals 0

    invoke-super {p0, p1}, Landroid/app/Application;->startActivity(Landroid/content/Intent;)V

    return-void
.end method
