.class public final Lcom/kwad/sdk/utils/bj;
.super Ljava/lang/Object;


# static fields
.field private static final aKp:Landroid/os/Handler;

.field private static jM:J = 0x190L


# direct methods
.method static constructor <clinit>()V
    .locals 2

    new-instance v0, Landroid/os/Handler;

    invoke-static {}, Landroid/os/Looper;->getMainLooper()Landroid/os/Looper;

    move-result-object v1

    invoke-direct {v0, v1}, Landroid/os/Handler;-><init>(Landroid/os/Looper;)V

    sput-object v0, Lcom/kwad/sdk/utils/bj;->aKp:Landroid/os/Handler;

    return-void
.end method

.method public static a(Landroid/content/Context;Landroid/os/Vibrator;)V
    .locals 2

    sget-wide v0, Lcom/kwad/sdk/utils/bj;->jM:J

    invoke-static {p0, p1, v0, v1}, Lcom/kwad/sdk/utils/bj;->vibrate(Landroid/content/Context;Landroid/os/Vibrator;J)V

    return-void
.end method

.method public static a(Ljava/lang/Runnable;Ljava/lang/Object;J)V
    .locals 0

    sget-object p1, Lcom/kwad/sdk/utils/bj;->aKp:Landroid/os/Handler;

    invoke-static {p1, p0}, Landroid/os/Message;->obtain(Landroid/os/Handler;Ljava/lang/Runnable;)Landroid/os/Message;

    move-result-object p0

    const/4 p1, 0x0

    iput-object p1, p0, Landroid/os/Message;->obj:Ljava/lang/Object;

    sget-object p1, Lcom/kwad/sdk/utils/bj;->aKp:Landroid/os/Handler;

    invoke-virtual {p1, p0, p2, p3}, Landroid/os/Handler;->sendMessageDelayed(Landroid/os/Message;J)Z

    return-void
.end method

.method public static b(Landroid/content/Context;Landroid/os/Vibrator;)V
    .locals 1

    if-eqz p1, :cond_0

    const-string v0, "android.permission.VIBRATE"

    invoke-static {p0, v0}, Lcom/kwad/sdk/utils/al;->ao(Landroid/content/Context;Ljava/lang/String;)I

    move-result p0

    if-nez p0, :cond_0

    invoke-virtual {p1}, Landroid/os/Vibrator;->cancel()V

    :cond_0
    return-void
.end method

.method public static b(Ljava/lang/Runnable;)V
    .locals 1

    sget-object v0, Lcom/kwad/sdk/utils/bj;->aKp:Landroid/os/Handler;

    invoke-virtual {v0, p0}, Landroid/os/Handler;->removeCallbacks(Ljava/lang/Runnable;)V

    return-void
.end method

.method public static c(Ljava/io/Closeable;)V
    .locals 0

    if-eqz p0, :cond_0

    :try_start_0
    invoke-interface {p0}, Ljava/io/Closeable;->close()V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :catchall_0
    :cond_0
    return-void
.end method

.method public static postOnUiThread(Ljava/lang/Runnable;)V
    .locals 1

    sget-object v0, Lcom/kwad/sdk/utils/bj;->aKp:Landroid/os/Handler;

    invoke-virtual {v0, p0}, Landroid/os/Handler;->post(Ljava/lang/Runnable;)Z

    return-void
.end method

.method public static runOnUiThread(Ljava/lang/Runnable;)V
    .locals 2

    invoke-static {}, Landroid/os/Looper;->getMainLooper()Landroid/os/Looper;

    move-result-object v0

    invoke-static {}, Landroid/os/Looper;->myLooper()Landroid/os/Looper;

    move-result-object v1

    if-ne v0, v1, :cond_0

    invoke-interface {p0}, Ljava/lang/Runnable;->run()V

    return-void

    :cond_0
    sget-object v0, Lcom/kwad/sdk/utils/bj;->aKp:Landroid/os/Handler;

    invoke-virtual {v0, p0}, Landroid/os/Handler;->post(Ljava/lang/Runnable;)Z

    return-void
.end method

.method public static runOnUiThreadDelay(Ljava/lang/Runnable;J)V
    .locals 1

    sget-object v0, Lcom/kwad/sdk/utils/bj;->aKp:Landroid/os/Handler;

    invoke-virtual {v0, p0, p1, p2}, Landroid/os/Handler;->postDelayed(Ljava/lang/Runnable;J)Z

    return-void
.end method

.method public static vibrate(Landroid/content/Context;Landroid/os/Vibrator;J)V
    .locals 1

    if-eqz p1, :cond_1

    :try_start_0
    const-string v0, "android.permission.VIBRATE"

    invoke-static {p0, v0}, Lcom/kwad/sdk/utils/al;->ao(Landroid/content/Context;Ljava/lang/String;)I

    move-result p0

    if-nez p0, :cond_1

    sget p0, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v0, 0x1a

    if-lt p0, v0, :cond_0

    const/4 p0, -0x1

    invoke-static {p2, p3, p0}, Landroid/os/VibrationEffect;->createOneShot(JI)Landroid/os/VibrationEffect;

    move-result-object p0

    invoke-virtual {p1, p0}, Landroid/os/Vibrator;->vibrate(Landroid/os/VibrationEffect;)V

    goto :goto_0

    :cond_0
    invoke-virtual {p1, p2, p3}, Landroid/os/Vibrator;->vibrate(J)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception p0

    invoke-static {p0}, Lcom/kwad/sdk/core/e/c;->printStackTrace(Ljava/lang/Throwable;)V

    :cond_1
    :goto_0
    return-void
.end method
