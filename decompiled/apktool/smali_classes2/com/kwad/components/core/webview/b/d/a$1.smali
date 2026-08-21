.class final Lcom/kwad/components/core/webview/b/d/a$1;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/components/core/webview/b/d/a;->aR(I)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic XB:I

.field final synthetic XC:Lcom/kwad/components/core/webview/b/d/a;


# direct methods
.method constructor <init>(Lcom/kwad/components/core/webview/b/d/a;I)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/core/webview/b/d/a$1;->XC:Lcom/kwad/components/core/webview/b/d/a;

    iput p2, p0, Lcom/kwad/components/core/webview/b/d/a$1;->XB:I

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/core/webview/b/d/a$1;->XC:Lcom/kwad/components/core/webview/b/d/a;

    iget v1, p0, Lcom/kwad/components/core/webview/b/d/a$1;->XB:I

    invoke-static {v0, v1}, Lcom/kwad/components/core/webview/b/d/a;->a(Lcom/kwad/components/core/webview/b/d/a;I)V

    return-void
.end method
