.class final Lcom/tkay/splashad/a/c$1$1$1;
.super Ljava/lang/Object;

# interfaces
.implements Landroid/view/View$OnClickListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/splashad/a/c$1$1;->run()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/splashad/a/f;

.field final synthetic b:Lcom/tkay/splashad/a/c$1$1;


# direct methods
.method constructor <init>(Lcom/tkay/splashad/a/c$1$1;Lcom/tkay/splashad/a/f;)V
    .locals 0

    .line 230
    iput-object p1, p0, Lcom/tkay/splashad/a/c$1$1$1;->b:Lcom/tkay/splashad/a/c$1$1;

    iput-object p2, p0, Lcom/tkay/splashad/a/c$1$1$1;->a:Lcom/tkay/splashad/a/f;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final onClick(Landroid/view/View;)V
    .locals 1

    .line 233
    iget-object p1, p0, Lcom/tkay/splashad/a/c$1$1$1;->a:Lcom/tkay/splashad/a/f;

    if-eqz p1, :cond_0

    const/4 v0, 0x2

    .line 234
    invoke-virtual {p1, v0}, Lcom/tkay/splashad/a/f;->a(I)V

    .line 235
    iget-object p1, p0, Lcom/tkay/splashad/a/c$1$1$1;->a:Lcom/tkay/splashad/a/f;

    invoke-virtual {p1}, Lcom/tkay/splashad/a/f;->onSplashAdDismiss()V

    :cond_0
    return-void
.end method
