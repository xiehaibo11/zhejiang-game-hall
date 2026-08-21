.class final Lcom/kwad/sdk/core/webview/b/a$5;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/sdk/core/webview/b/a;->b(Lcom/kwad/sdk/h/a/b;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic ayD:Lcom/kwad/sdk/core/webview/b/a;

.field final synthetic ayE:Lcom/kwad/sdk/h/a/b;


# direct methods
.method constructor <init>(Lcom/kwad/sdk/core/webview/b/a;Lcom/kwad/sdk/h/a/b;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/sdk/core/webview/b/a$5;->ayD:Lcom/kwad/sdk/core/webview/b/a;

    iput-object p2, p0, Lcom/kwad/sdk/core/webview/b/a$5;->ayE:Lcom/kwad/sdk/h/a/b;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 2

    iget-object v0, p0, Lcom/kwad/sdk/core/webview/b/a$5;->ayD:Lcom/kwad/sdk/core/webview/b/a;

    iget-object v1, p0, Lcom/kwad/sdk/core/webview/b/a$5;->ayE:Lcom/kwad/sdk/h/a/b;

    invoke-static {v0, v1}, Lcom/kwad/sdk/core/webview/b/a;->a(Lcom/kwad/sdk/core/webview/b/a;Lcom/kwad/sdk/h/a/b;)V

    return-void
.end method
