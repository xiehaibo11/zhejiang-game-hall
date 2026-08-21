.class final Lcom/tkay/splashad/a/d$1;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/splashad/a/d;->b()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/splashad/a/d;


# direct methods
.method constructor <init>(Lcom/tkay/splashad/a/d;)V
    .locals 0

    .line 165
    iput-object p1, p0, Lcom/tkay/splashad/a/d$1;->a:Lcom/tkay/splashad/a/d;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 2

    .line 168
    iget-object v0, p0, Lcom/tkay/splashad/a/d$1;->a:Lcom/tkay/splashad/a/d;

    iget-object v0, v0, Lcom/tkay/splashad/a/d;->b:Lcom/tkay/splashad/a/b;

    if-eqz v0, :cond_0

    .line 169
    iget-object v0, p0, Lcom/tkay/splashad/a/d$1;->a:Lcom/tkay/splashad/a/d;

    iget-object v0, v0, Lcom/tkay/splashad/a/d;->b:Lcom/tkay/splashad/a/b;

    invoke-virtual {v0}, Lcom/tkay/splashad/a/b;->onAdLoaded()V

    .line 171
    :cond_0
    iget-object v0, p0, Lcom/tkay/splashad/a/d$1;->a:Lcom/tkay/splashad/a/d;

    const/4 v1, 0x0

    iput-object v1, v0, Lcom/tkay/splashad/a/d;->b:Lcom/tkay/splashad/a/b;

    return-void
.end method
