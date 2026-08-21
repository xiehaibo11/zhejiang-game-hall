.class final Lcom/kwad/components/core/s/b/a$2;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/kwad/sdk/core/webview/c/g;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/components/core/s/b/a;->ah()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic Rb:Lcom/kwad/components/core/s/b/a;


# direct methods
.method constructor <init>(Lcom/kwad/components/core/s/b/a;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/core/s/b/a$2;->Rb:Lcom/kwad/components/core/s/b/a;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final callTKBridge(Ljava/lang/String;)V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/core/s/b/a$2;->Rb:Lcom/kwad/components/core/s/b/a;

    iget-object v0, v0, Lcom/kwad/components/core/s/b/a;->QZ:Lcom/kwad/components/core/s/a/b;

    iget-object v0, v0, Lcom/kwad/components/core/s/a/b;->QR:Lcom/kwad/sdk/components/h;

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/kwad/components/core/s/b/a$2;->Rb:Lcom/kwad/components/core/s/b/a;

    iget-object v0, v0, Lcom/kwad/components/core/s/b/a;->QZ:Lcom/kwad/components/core/s/a/b;

    iget-object v0, v0, Lcom/kwad/components/core/s/a/b;->QR:Lcom/kwad/sdk/components/h;

    invoke-interface {v0, p1}, Lcom/kwad/sdk/components/h;->callTKBridge(Ljava/lang/String;)V

    :cond_0
    return-void
.end method
