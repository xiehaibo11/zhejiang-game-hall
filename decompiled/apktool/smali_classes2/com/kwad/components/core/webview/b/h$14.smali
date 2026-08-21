.class final Lcom/kwad/components/core/webview/b/h$14;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/components/core/webview/b/h;->jv()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic Wk:Lcom/kwad/components/core/webview/b/h;

.field final synthetic Wo:Lcom/kwad/sdk/components/l;


# direct methods
.method constructor <init>(Lcom/kwad/components/core/webview/b/h;Lcom/kwad/sdk/components/l;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/core/webview/b/h$14;->Wk:Lcom/kwad/components/core/webview/b/h;

    iput-object p2, p0, Lcom/kwad/components/core/webview/b/h$14;->Wo:Lcom/kwad/sdk/components/l;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/core/webview/b/h$14;->Wo:Lcom/kwad/sdk/components/l;

    if-eqz v0, :cond_0

    invoke-interface {v0}, Lcom/kwad/sdk/components/l;->onDestroy()V

    :cond_0
    return-void
.end method
