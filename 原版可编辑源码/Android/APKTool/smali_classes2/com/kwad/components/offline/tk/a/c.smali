.class public final Lcom/kwad/components/offline/tk/a/c;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/kwad/components/offline/api/tk/IOfflineHostActionHandler;


# instance fields
.field private final Wi:Lcom/kwad/sdk/components/j;


# direct methods
.method public constructor <init>(Lcom/kwad/sdk/components/j;)V
    .locals 0

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    iput-object p1, p0, Lcom/kwad/components/offline/tk/a/c;->Wi:Lcom/kwad/sdk/components/j;

    return-void
.end method

.method private a(Lcom/kwad/components/offline/api/tk/IOfflineTKDialog;)Lcom/kwad/sdk/components/g;
    .locals 1

    new-instance v0, Lcom/kwad/components/offline/tk/a/c$2;

    invoke-direct {v0, p0, p1}, Lcom/kwad/components/offline/tk/a/c$2;-><init>(Lcom/kwad/components/offline/tk/a/c;Lcom/kwad/components/offline/api/tk/IOfflineTKDialog;)V

    return-object v0
.end method

.method private a(Lcom/kwad/components/offline/api/tk/IOfflineTKNativeIntent;)Lcom/kwad/sdk/components/h;
    .locals 1

    new-instance v0, Lcom/kwad/components/offline/tk/a/c$1;

    invoke-direct {v0, p0, p1}, Lcom/kwad/components/offline/tk/a/c$1;-><init>(Lcom/kwad/components/offline/tk/a/c;Lcom/kwad/components/offline/api/tk/IOfflineTKNativeIntent;)V

    return-object v0
.end method


# virtual methods
.method public final dismissDialog(Lcom/kwad/components/offline/api/tk/IOfflineTKDialog;)V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/offline/tk/a/c;->Wi:Lcom/kwad/sdk/components/j;

    if-eqz v0, :cond_0

    invoke-direct {p0, p1}, Lcom/kwad/components/offline/tk/a/c;->a(Lcom/kwad/components/offline/api/tk/IOfflineTKDialog;)Lcom/kwad/sdk/components/g;

    move-result-object p1

    invoke-interface {v0, p1}, Lcom/kwad/sdk/components/j;->b(Lcom/kwad/sdk/components/g;)V

    :cond_0
    return-void
.end method

.method public final showDialog(Lcom/kwad/components/offline/api/tk/IOfflineTKDialog;)V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/offline/tk/a/c;->Wi:Lcom/kwad/sdk/components/j;

    if-eqz v0, :cond_0

    invoke-direct {p0, p1}, Lcom/kwad/components/offline/tk/a/c;->a(Lcom/kwad/components/offline/api/tk/IOfflineTKDialog;)Lcom/kwad/sdk/components/g;

    move-result-object p1

    invoke-interface {v0, p1}, Lcom/kwad/sdk/components/j;->a(Lcom/kwad/sdk/components/g;)V

    :cond_0
    return-void
.end method

.method public final startActivity(Lcom/kwad/components/offline/api/tk/IOfflineTKNativeIntent;)V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/offline/tk/a/c;->Wi:Lcom/kwad/sdk/components/j;

    if-eqz v0, :cond_0

    invoke-direct {p0, p1}, Lcom/kwad/components/offline/tk/a/c;->a(Lcom/kwad/components/offline/api/tk/IOfflineTKNativeIntent;)Lcom/kwad/sdk/components/h;

    move-result-object p1

    invoke-interface {v0, p1}, Lcom/kwad/sdk/components/j;->a(Lcom/kwad/sdk/components/h;)V

    :cond_0
    return-void
.end method
