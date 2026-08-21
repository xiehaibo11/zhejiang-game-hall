.class Lcom/ss/android/socialbase/appdownloader/df$pt;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/util/concurrent/Callable;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/ss/android/socialbase/appdownloader/df;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0xa
    name = "pt"
.end annotation

.annotation system Ldalvik/annotation/Signature;
    value = {
        "Ljava/lang/Object;",
        "Ljava/util/concurrent/Callable<",
        "Ljava/lang/Boolean;",
        ">;"
    }
.end annotation


# instance fields
.field private final df:Lcom/ss/android/socialbase/appdownloader/df$df;

.field private final pt:J

.field private final q:Landroid/os/Handler;

.field private final rg:Landroid/content/Context;


# direct methods
.method public constructor <init>(Landroid/os/Handler;Landroid/content/Context;Lcom/ss/android/socialbase/appdownloader/df$df;J)V
    .locals 0

    .line 937
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 938
    iput-object p2, p0, Lcom/ss/android/socialbase/appdownloader/df$pt;->rg:Landroid/content/Context;

    .line 939
    iput-object p3, p0, Lcom/ss/android/socialbase/appdownloader/df$pt;->df:Lcom/ss/android/socialbase/appdownloader/df$df;

    .line 940
    iput-object p1, p0, Lcom/ss/android/socialbase/appdownloader/df$pt;->q:Landroid/os/Handler;

    .line 941
    iput-wide p4, p0, Lcom/ss/android/socialbase/appdownloader/df$pt;->pt:J

    return-void
.end method


# virtual methods
.method public call()Ljava/lang/Boolean;
    .locals 5
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/lang/Exception;
        }
    .end annotation

    const/4 v0, 0x0

    .line 947
    :try_start_0
    iget-object v1, p0, Lcom/ss/android/socialbase/appdownloader/df$pt;->df:Lcom/ss/android/socialbase/appdownloader/df$df;

    if-eqz v1, :cond_3

    iget-wide v1, p0, Lcom/ss/android/socialbase/appdownloader/df$pt;->pt:J

    const-wide/16 v3, 0x0

    cmp-long v1, v1, v3

    if-lez v1, :cond_3

    iget-wide v1, p0, Lcom/ss/android/socialbase/appdownloader/df$pt;->pt:J

    const-wide/16 v3, 0x2710

    cmp-long v1, v1, v3

    if-lez v1, :cond_0

    goto :goto_1

    .line 951
    :cond_0
    iget-object v1, p0, Lcom/ss/android/socialbase/appdownloader/df$pt;->rg:Landroid/content/Context;

    if-eqz v1, :cond_1

    .line 953
    iget-object v2, p0, Lcom/ss/android/socialbase/appdownloader/df$pt;->df:Lcom/ss/android/socialbase/appdownloader/df$df;

    invoke-interface {v2, v1}, Lcom/ss/android/socialbase/appdownloader/df$df;->rg(Landroid/content/Context;)Z

    move-result v1

    goto :goto_0

    :cond_1
    move v1, v0

    .line 955
    :goto_0
    invoke-static {}, Landroid/os/Message;->obtain()Landroid/os/Message;

    move-result-object v2

    if-eqz v1, :cond_2

    const/4 v1, 0x2

    .line 957
    iput v1, v2, Landroid/os/Message;->what:I

    .line 958
    iget-object v1, p0, Lcom/ss/android/socialbase/appdownloader/df$pt;->q:Landroid/os/Handler;

    invoke-virtual {v1, v2}, Landroid/os/Handler;->sendMessage(Landroid/os/Message;)Z

    goto :goto_2

    :cond_2
    const/4 v1, 0x1

    .line 960
    iput v1, v2, Landroid/os/Message;->what:I

    .line 961
    iget-object v1, p0, Lcom/ss/android/socialbase/appdownloader/df$pt;->q:Landroid/os/Handler;

    iget-wide v3, p0, Lcom/ss/android/socialbase/appdownloader/df$pt;->pt:J

    invoke-virtual {v1, v2, v3, v4}, Landroid/os/Handler;->sendMessageDelayed(Landroid/os/Message;J)Z

    goto :goto_2

    .line 948
    :cond_3
    :goto_1
    invoke-static {v0}, Ljava/lang/Boolean;->valueOf(Z)Ljava/lang/Boolean;

    move-result-object v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-object v0

    .line 968
    :catchall_0
    :goto_2
    invoke-static {v0}, Ljava/lang/Boolean;->valueOf(Z)Ljava/lang/Boolean;

    move-result-object v0

    return-object v0
.end method

.method public bridge synthetic call()Ljava/lang/Object;
    .locals 1
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/lang/Exception;
        }
    .end annotation

    .line 931
    invoke-virtual {p0}, Lcom/ss/android/socialbase/appdownloader/df$pt;->call()Ljava/lang/Boolean;

    move-result-object v0

    return-object v0
.end method
