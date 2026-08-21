.class Lcom/ss/android/downloadlib/df/df$1;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/ss/android/downloadlib/df/df;->rg(Lcom/ss/android/downloadad/api/rg/df;Lcom/ss/android/downloadlib/df/fw;I)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic df:Lcom/ss/android/downloadlib/df/fw;

.field final synthetic q:Lcom/ss/android/downloadlib/df/df;

.field final synthetic rg:Lcom/ss/android/downloadad/api/rg/df;


# direct methods
.method constructor <init>(Lcom/ss/android/downloadlib/df/df;Lcom/ss/android/downloadad/api/rg/df;Lcom/ss/android/downloadlib/df/fw;)V
    .locals 0

    .line 20
    iput-object p1, p0, Lcom/ss/android/downloadlib/df/df$1;->q:Lcom/ss/android/downloadlib/df/df;

    iput-object p2, p0, Lcom/ss/android/downloadlib/df/df$1;->rg:Lcom/ss/android/downloadad/api/rg/df;

    iput-object p3, p0, Lcom/ss/android/downloadlib/df/df$1;->df:Lcom/ss/android/downloadlib/df/fw;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public run()V
    .locals 2

    .line 23
    iget-object v0, p0, Lcom/ss/android/downloadlib/df/df$1;->rg:Lcom/ss/android/downloadad/api/rg/df;

    invoke-static {v0}, Lcom/ss/android/downloadlib/df/rz;->rg(Lcom/ss/android/downloadad/api/rg/rg;)Z

    move-result v0

    const/4 v1, 0x0

    if-eqz v0, :cond_0

    .line 24
    iget-object v0, p0, Lcom/ss/android/downloadlib/df/df$1;->df:Lcom/ss/android/downloadlib/df/fw;

    invoke-interface {v0, v1}, Lcom/ss/android/downloadlib/df/fw;->rg(Z)V

    goto :goto_0

    .line 27
    :cond_0
    iget-object v0, p0, Lcom/ss/android/downloadlib/df/df$1;->rg:Lcom/ss/android/downloadad/api/rg/df;

    invoke-static {v0}, Lcom/ss/android/downloadlib/df/c;->rg(Lcom/ss/android/downloadad/api/rg/df;)Z

    move-result v0

    if-nez v0, :cond_1

    .line 29
    iget-object v0, p0, Lcom/ss/android/downloadlib/df/df$1;->df:Lcom/ss/android/downloadlib/df/fw;

    invoke-interface {v0, v1}, Lcom/ss/android/downloadlib/df/fw;->rg(Z)V

    return-void

    .line 33
    :cond_1
    iget-object v0, p0, Lcom/ss/android/downloadlib/df/df$1;->rg:Lcom/ss/android/downloadad/api/rg/df;

    new-instance v1, Lcom/ss/android/downloadlib/df/df$1$1;

    invoke-direct {v1, p0}, Lcom/ss/android/downloadlib/df/df$1$1;-><init>(Lcom/ss/android/downloadlib/df/df$1;)V

    invoke-static {v0, v1}, Lcom/ss/android/downloadlib/df/c;->rg(Lcom/ss/android/downloadad/api/rg/df;Lcom/ss/android/downloadlib/df/ux;)V

    :goto_0
    return-void
.end method
