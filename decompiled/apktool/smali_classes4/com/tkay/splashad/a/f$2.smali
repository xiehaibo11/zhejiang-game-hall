.class final Lcom/tkay/splashad/a/f$2;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/splashad/a/f;->a(Lcom/tkay/splashad/api/TYSplashSkipInfo;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/splashad/api/TYSplashSkipAdListener;

.field final synthetic b:J

.field final synthetic c:J

.field final synthetic d:Lcom/tkay/splashad/a/f;


# direct methods
.method constructor <init>(Lcom/tkay/splashad/a/f;Lcom/tkay/splashad/api/TYSplashSkipAdListener;JJ)V
    .locals 0

    .line 230
    iput-object p1, p0, Lcom/tkay/splashad/a/f$2;->d:Lcom/tkay/splashad/a/f;

    iput-object p2, p0, Lcom/tkay/splashad/a/f$2;->a:Lcom/tkay/splashad/api/TYSplashSkipAdListener;

    iput-wide p3, p0, Lcom/tkay/splashad/a/f$2;->b:J

    iput-wide p5, p0, Lcom/tkay/splashad/a/f$2;->c:J

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 5

    .line 233
    iget-object v0, p0, Lcom/tkay/splashad/a/f$2;->a:Lcom/tkay/splashad/api/TYSplashSkipAdListener;

    if-eqz v0, :cond_0

    .line 234
    iget-wide v1, p0, Lcom/tkay/splashad/a/f$2;->b:J

    iget-object v3, p0, Lcom/tkay/splashad/a/f$2;->d:Lcom/tkay/splashad/a/f;

    iget-wide v3, v3, Lcom/tkay/splashad/a/f;->c:J

    invoke-interface {v0, v1, v2, v3, v4}, Lcom/tkay/splashad/api/TYSplashSkipAdListener;->onAdTick(JJ)V

    .line 235
    iget-object v0, p0, Lcom/tkay/splashad/a/f$2;->d:Lcom/tkay/splashad/a/f;

    iget-wide v1, v0, Lcom/tkay/splashad/a/f;->c:J

    iget-wide v3, p0, Lcom/tkay/splashad/a/f$2;->c:J

    sub-long/2addr v1, v3

    iput-wide v1, v0, Lcom/tkay/splashad/a/f;->c:J

    :cond_0
    return-void
.end method
