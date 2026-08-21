.class final Lcom/tkay/basead/a/a$3;
.super Lcom/tkay/core/common/l/a/a;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/basead/a/a;->a(I)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:I

.field final synthetic b:Lcom/tkay/basead/a/a;


# direct methods
.method constructor <init>(Lcom/tkay/basead/a/a;I)V
    .locals 0

    .line 162
    iput-object p1, p0, Lcom/tkay/basead/a/a$3;->b:Lcom/tkay/basead/a/a;

    iput p2, p0, Lcom/tkay/basead/a/a$3;->a:I

    invoke-direct {p0}, Lcom/tkay/core/common/l/a/a;-><init>()V

    return-void
.end method


# virtual methods
.method public final getImpressionMinPercentageViewed()I
    .locals 1

    const/16 v0, 0x1e

    return v0
.end method

.method public final recordImpression(Landroid/view/View;)V
    .locals 1

    .line 165
    iget-object p1, p0, Lcom/tkay/basead/a/a$3;->b:Lcom/tkay/basead/a/a;

    iget v0, p0, Lcom/tkay/basead/a/a$3;->a:I

    invoke-static {p1, v0}, Lcom/tkay/basead/a/a;->a(Lcom/tkay/basead/a/a;I)V

    return-void
.end method
