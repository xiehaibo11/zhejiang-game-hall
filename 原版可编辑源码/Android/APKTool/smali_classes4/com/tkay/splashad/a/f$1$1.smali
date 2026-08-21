.class final Lcom/tkay/splashad/a/f$1$1;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/splashad/a/f$1;->run()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/splashad/a/f$1;


# direct methods
.method constructor <init>(Lcom/tkay/splashad/a/f$1;)V
    .locals 0

    .line 212
    iput-object p1, p0, Lcom/tkay/splashad/a/f$1$1;->a:Lcom/tkay/splashad/a/f$1;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 5

    .line 215
    iget-object v0, p0, Lcom/tkay/splashad/a/f$1$1;->a:Lcom/tkay/splashad/a/f$1;

    iget-object v0, v0, Lcom/tkay/splashad/a/f$1;->f:Lcom/tkay/splashad/a/f;

    iget-wide v0, v0, Lcom/tkay/splashad/a/f;->c:J

    const-wide/16 v2, 0x0

    cmp-long v0, v0, v2

    if-gtz v0, :cond_0

    .line 216
    iget-object v0, p0, Lcom/tkay/splashad/a/f$1$1;->a:Lcom/tkay/splashad/a/f$1;

    iget-object v0, v0, Lcom/tkay/splashad/a/f$1;->f:Lcom/tkay/splashad/a/f;

    const/4 v1, 0x3

    invoke-virtual {v0, v1}, Lcom/tkay/splashad/a/f;->a(I)V

    .line 217
    iget-object v0, p0, Lcom/tkay/splashad/a/f$1$1;->a:Lcom/tkay/splashad/a/f$1;

    iget-object v0, v0, Lcom/tkay/splashad/a/f$1;->f:Lcom/tkay/splashad/a/f;

    invoke-virtual {v0}, Lcom/tkay/splashad/a/f;->onSplashAdDismiss()V

    goto :goto_0

    .line 219
    :cond_0
    iget-object v0, p0, Lcom/tkay/splashad/a/f$1$1;->a:Lcom/tkay/splashad/a/f$1;

    iget-object v0, v0, Lcom/tkay/splashad/a/f$1;->c:Lcom/tkay/splashad/api/TYSplashSkipAdListener;

    if-eqz v0, :cond_1

    .line 220
    iget-object v0, p0, Lcom/tkay/splashad/a/f$1$1;->a:Lcom/tkay/splashad/a/f$1;

    iget-object v0, v0, Lcom/tkay/splashad/a/f$1;->c:Lcom/tkay/splashad/api/TYSplashSkipAdListener;

    iget-object v1, p0, Lcom/tkay/splashad/a/f$1$1;->a:Lcom/tkay/splashad/a/f$1;

    iget-wide v1, v1, Lcom/tkay/splashad/a/f$1;->d:J

    iget-object v3, p0, Lcom/tkay/splashad/a/f$1$1;->a:Lcom/tkay/splashad/a/f$1;

    iget-object v3, v3, Lcom/tkay/splashad/a/f$1;->f:Lcom/tkay/splashad/a/f;

    iget-wide v3, v3, Lcom/tkay/splashad/a/f;->c:J

    invoke-interface {v0, v1, v2, v3, v4}, Lcom/tkay/splashad/api/TYSplashSkipAdListener;->onAdTick(JJ)V

    .line 223
    :cond_1
    :goto_0
    iget-object v0, p0, Lcom/tkay/splashad/a/f$1$1;->a:Lcom/tkay/splashad/a/f$1;

    iget-object v0, v0, Lcom/tkay/splashad/a/f$1;->f:Lcom/tkay/splashad/a/f;

    iget-wide v1, v0, Lcom/tkay/splashad/a/f;->c:J

    iget-object v3, p0, Lcom/tkay/splashad/a/f$1$1;->a:Lcom/tkay/splashad/a/f$1;

    iget-wide v3, v3, Lcom/tkay/splashad/a/f$1;->e:J

    sub-long/2addr v1, v3

    iput-wide v1, v0, Lcom/tkay/splashad/a/f;->c:J

    return-void
.end method
