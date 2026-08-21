.class public final Lcom/kwad/components/offline/tk/a/e;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/kwad/components/offline/api/tk/IOfflineTKCallHandler;


# instance fields
.field private final ZQ:Lcom/kwad/sdk/components/i;


# direct methods
.method public constructor <init>(Lcom/kwad/sdk/components/i;)V
    .locals 0

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    iput-object p1, p0, Lcom/kwad/components/offline/tk/a/e;->ZQ:Lcom/kwad/sdk/components/i;

    return-void
.end method


# virtual methods
.method public final callJS(Ljava/lang/String;)V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/offline/tk/a/e;->ZQ:Lcom/kwad/sdk/components/i;

    if-eqz v0, :cond_0

    invoke-interface {v0, p1}, Lcom/kwad/sdk/components/i;->callJS(Ljava/lang/String;)V

    :cond_0
    return-void
.end method
