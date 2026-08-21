.class final Lcom/kwad/components/ad/feed/b/b$2;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/kwad/components/core/e/d/a$b;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/components/ad/feed/b/b;->a(Landroid/view/View;I)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic et:Lcom/kwad/components/ad/feed/b/b;

.field final synthetic eu:I


# direct methods
.method constructor <init>(Lcom/kwad/components/ad/feed/b/b;I)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/ad/feed/b/b$2;->et:Lcom/kwad/components/ad/feed/b/b;

    iput p2, p0, Lcom/kwad/components/ad/feed/b/b$2;->eu:I

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final onAdClicked()V
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/ad/feed/b/b$2;->et:Lcom/kwad/components/ad/feed/b/b;

    iget v1, p0, Lcom/kwad/components/ad/feed/b/b$2;->eu:I

    invoke-static {v0, v1}, Lcom/kwad/components/ad/feed/b/b;->a(Lcom/kwad/components/ad/feed/b/b;I)V

    return-void
.end method
