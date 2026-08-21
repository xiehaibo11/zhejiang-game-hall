.class final Lcom/tkay/expressad/mbbanner/a/d/c$5;
.super Ljava/lang/Object;

# interfaces
.implements Landroid/view/View$OnClickListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/tkay/expressad/mbbanner/a/d/c;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/expressad/mbbanner/a/d/c;


# direct methods
.method constructor <init>(Lcom/tkay/expressad/mbbanner/a/d/c;)V
    .locals 0

    .line 132
    iput-object p1, p0, Lcom/tkay/expressad/mbbanner/a/d/c$5;->a:Lcom/tkay/expressad/mbbanner/a/d/c;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final onClick(Landroid/view/View;)V
    .locals 0

    .line 140
    iget-object p1, p0, Lcom/tkay/expressad/mbbanner/a/d/c$5;->a:Lcom/tkay/expressad/mbbanner/a/d/c;

    invoke-static {p1}, Lcom/tkay/expressad/mbbanner/a/d/c;->a(Lcom/tkay/expressad/mbbanner/a/d/c;)Z

    move-result p1

    if-eqz p1, :cond_0

    .line 141
    iget-object p1, p0, Lcom/tkay/expressad/mbbanner/a/d/c$5;->a:Lcom/tkay/expressad/mbbanner/a/d/c;

    invoke-static {p1}, Lcom/tkay/expressad/mbbanner/a/d/c;->b(Lcom/tkay/expressad/mbbanner/a/d/c;)V

    :cond_0
    return-void
.end method
