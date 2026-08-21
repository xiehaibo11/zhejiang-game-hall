.class public final Lcom/kwad/components/core/webview/jshandler/an$b;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/kwad/components/core/webview/jshandler/an;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x19
    name = "b"
.end annotation


# instance fields
.field Rx:Ljava/lang/ref/WeakReference;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/lang/ref/WeakReference<",
            "Lcom/kwad/sdk/core/webview/c/c;",
            ">;"
        }
    .end annotation
.end field


# direct methods
.method public constructor <init>(Lcom/kwad/sdk/core/webview/c/c;)V
    .locals 1

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    new-instance v0, Ljava/lang/ref/WeakReference;

    invoke-direct {v0, p1}, Ljava/lang/ref/WeakReference;-><init>(Ljava/lang/Object;)V

    iput-object v0, p0, Lcom/kwad/components/core/webview/jshandler/an$b;->Rx:Ljava/lang/ref/WeakReference;

    return-void
.end method


# virtual methods
.method public final a(Lcom/kwad/components/core/webview/jshandler/an$a;)V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/core/webview/jshandler/an$b;->Rx:Ljava/lang/ref/WeakReference;

    invoke-virtual {v0}, Ljava/lang/ref/WeakReference;->get()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/kwad/sdk/core/webview/c/c;

    if-eqz v0, :cond_0

    invoke-interface {v0, p1}, Lcom/kwad/sdk/core/webview/c/c;->a(Lcom/kwad/sdk/core/b;)V

    :cond_0
    return-void
.end method
