.class Lcom/ss/android/downloadlib/rg$q;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/ss/android/downloadlib/rg;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x2
    name = "q"
.end annotation


# instance fields
.field private final df:Lcom/ss/android/downloadad/api/rg/df;

.field final synthetic rg:Lcom/ss/android/downloadlib/rg;


# direct methods
.method public constructor <init>(Lcom/ss/android/downloadlib/rg;Lcom/ss/android/downloadad/api/rg/df;)V
    .locals 0

    .line 1078
    iput-object p1, p0, Lcom/ss/android/downloadlib/rg$q;->rg:Lcom/ss/android/downloadlib/rg;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 1079
    iput-object p2, p0, Lcom/ss/android/downloadlib/rg$q;->df:Lcom/ss/android/downloadad/api/rg/df;

    return-void
.end method


# virtual methods
.method public run()V
    .locals 3

    const/4 v0, 0x0

    .line 1085
    :try_start_0
    iget-object v1, p0, Lcom/ss/android/downloadlib/rg$q;->df:Lcom/ss/android/downloadad/api/rg/df;

    const/4 v2, 0x1

    invoke-virtual {v1, v2}, Lcom/ss/android/downloadad/api/rg/df;->bm(Z)V

    .line 1086
    iget-object v1, p0, Lcom/ss/android/downloadlib/rg$q;->rg:Lcom/ss/android/downloadlib/rg;

    iget-object v2, p0, Lcom/ss/android/downloadlib/rg$q;->df:Lcom/ss/android/downloadad/api/rg/df;

    invoke-static {v1, v2}, Lcom/ss/android/downloadlib/rg;->rg(Lcom/ss/android/downloadlib/rg;Lcom/ss/android/downloadad/api/rg/df;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception v1

    goto :goto_1

    :catch_0
    move-exception v1

    .line 1088
    :try_start_1
    invoke-virtual {v1}, Ljava/lang/Exception;->printStackTrace()V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 1090
    :goto_0
    iget-object v1, p0, Lcom/ss/android/downloadlib/rg$q;->df:Lcom/ss/android/downloadad/api/rg/df;

    invoke-virtual {v1, v0}, Lcom/ss/android/downloadad/api/rg/df;->bm(Z)V

    return-void

    :goto_1
    iget-object v2, p0, Lcom/ss/android/downloadlib/rg$q;->df:Lcom/ss/android/downloadad/api/rg/df;

    invoke-virtual {v2, v0}, Lcom/ss/android/downloadad/api/rg/df;->bm(Z)V

    throw v1
.end method
