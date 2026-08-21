.class public final Lcom/kwad/components/core/offline/init/a/k;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/kwad/components/offline/api/core/api/IVibratorUtil;


# direct methods
.method public constructor <init>()V
    .locals 0

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final cancelVibrate(Landroid/content/Context;Landroid/os/Vibrator;)V
    .locals 0

    invoke-static {p1, p2}, Lcom/kwad/sdk/utils/bj;->b(Landroid/content/Context;Landroid/os/Vibrator;)V

    return-void
.end method

.method public final vibrate(Landroid/content/Context;Landroid/os/Vibrator;J)V
    .locals 0

    invoke-static {p1, p2, p3, p4}, Lcom/kwad/sdk/utils/bj;->vibrate(Landroid/content/Context;Landroid/os/Vibrator;J)V

    return-void
.end method
