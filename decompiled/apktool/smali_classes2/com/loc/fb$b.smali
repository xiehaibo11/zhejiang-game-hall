.class final Lcom/loc/fb$b;
.super Landroid/telephony/PhoneStateListener;
.source "CgiManager.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/loc/fb;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = "b"
.end annotation


# instance fields
.field final synthetic a:Lcom/loc/fb;


# direct methods
.method constructor <init>(Lcom/loc/fb;)V
    .locals 0

    iput-object p1, p0, Lcom/loc/fb$b;->a:Lcom/loc/fb;

    invoke-direct {p0}, Landroid/telephony/PhoneStateListener;-><init>()V

    return-void
.end method


# virtual methods
.method public final onCellInfoChanged(Ljava/util/List;)V
    .locals 5
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/List<",
            "Landroid/telephony/CellInfo;",
            ">;)V"
        }
    .end annotation

    :try_start_0
    invoke-static {}, Lcom/loc/ft;->b()V

    iget-object v0, p0, Lcom/loc/fb$b;->a:Lcom/loc/fb;

    invoke-static {v0}, Lcom/loc/fb;->e(Lcom/loc/fb;)Lcom/loc/es;

    move-result-object v0

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/loc/fb$b;->a:Lcom/loc/fb;

    invoke-static {v0}, Lcom/loc/fb;->e(Lcom/loc/fb;)Lcom/loc/es;

    move-result-object v0

    invoke-virtual {v0}, Lcom/loc/es;->c()V

    :cond_0
    invoke-static {}, Lcom/loc/fz;->b()J

    move-result-wide v0

    iget-object v2, p0, Lcom/loc/fb$b;->a:Lcom/loc/fb;

    invoke-static {v2}, Lcom/loc/fb;->a(Lcom/loc/fb;)J

    move-result-wide v2

    sub-long/2addr v0, v2

    const-wide/16 v2, 0x1f4

    cmp-long v4, v0, v2

    if-gez v4, :cond_1

    return-void

    :cond_1
    iget-object v0, p0, Lcom/loc/fb$b;->a:Lcom/loc/fb;

    invoke-static {v0}, Lcom/loc/fb;->c(Lcom/loc/fb;)Landroid/telephony/CellLocation;

    move-result-object v0

    iget-object v1, p0, Lcom/loc/fb$b;->a:Lcom/loc/fb;

    invoke-static {v1, v0}, Lcom/loc/fb;->a(Lcom/loc/fb;Landroid/telephony/CellLocation;)V

    iget-object v0, p0, Lcom/loc/fb$b;->a:Lcom/loc/fb;

    invoke-virtual {v0, p1}, Lcom/loc/fb;->a(Ljava/util/List;)V

    iget-object p1, p0, Lcom/loc/fb$b;->a:Lcom/loc/fb;

    invoke-static {}, Lcom/loc/fz;->b()J

    move-result-wide v0

    invoke-static {p1, v0, v1}, Lcom/loc/fb;->a(Lcom/loc/fb;J)J
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-void

    :catchall_0
    move-exception p1

    invoke-virtual {p1}, Ljava/lang/Throwable;->printStackTrace()V

    return-void
.end method

.method public final onCellLocationChanged(Landroid/telephony/CellLocation;)V
    .locals 5

    invoke-static {}, Lcom/loc/ft;->b()V

    invoke-static {}, Lcom/loc/fz;->b()J

    move-result-wide v0

    iget-object v2, p0, Lcom/loc/fb$b;->a:Lcom/loc/fb;

    invoke-static {v2}, Lcom/loc/fb;->a(Lcom/loc/fb;)J

    move-result-wide v2

    sub-long/2addr v0, v2

    const-wide/16 v2, 0x1f4

    cmp-long v4, v0, v2

    if-gez v4, :cond_0

    return-void

    :cond_0
    :try_start_0
    iget-object v0, p0, Lcom/loc/fb$b;->a:Lcom/loc/fb;

    invoke-static {v0, p1}, Lcom/loc/fb;->a(Lcom/loc/fb;Landroid/telephony/CellLocation;)V

    iget-object p1, p0, Lcom/loc/fb$b;->a:Lcom/loc/fb;

    invoke-static {p1}, Lcom/loc/fb;->d(Lcom/loc/fb;)Ljava/util/List;

    move-result-object p1

    iget-object v0, p0, Lcom/loc/fb$b;->a:Lcom/loc/fb;

    invoke-virtual {v0, p1}, Lcom/loc/fb;->a(Ljava/util/List;)V

    iget-object p1, p0, Lcom/loc/fb$b;->a:Lcom/loc/fb;

    invoke-static {}, Lcom/loc/fz;->b()J

    move-result-wide v0

    invoke-static {p1, v0, v1}, Lcom/loc/fb;->a(Lcom/loc/fb;J)J
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-void

    :catchall_0
    move-exception p1

    invoke-virtual {p1}, Ljava/lang/Throwable;->printStackTrace()V

    return-void
.end method

.method public final onDataConnectionStateChanged(I)V
    .locals 0

    invoke-super {p0, p1}, Landroid/telephony/PhoneStateListener;->onDataConnectionStateChanged(I)V

    return-void
.end method

.method public final onServiceStateChanged(Landroid/telephony/ServiceState;)V
    .locals 1

    :try_start_0
    invoke-virtual {p1}, Landroid/telephony/ServiceState;->getState()I

    move-result p1

    if-eqz p1, :cond_1

    const/4 v0, 0x1

    if-eq p1, v0, :cond_0

    goto :goto_0

    :cond_0
    iget-object p1, p0, Lcom/loc/fb$b;->a:Lcom/loc/fb;

    invoke-virtual {p1}, Lcom/loc/fb;->j()V

    return-void

    :cond_1
    iget-object p1, p0, Lcom/loc/fb$b;->a:Lcom/loc/fb;

    const/4 v0, 0x0

    invoke-virtual {p1, v0, v0}, Lcom/loc/fb;->a(ZZ)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :catchall_0
    :goto_0
    return-void
.end method

.method public final onSignalStrengthChanged(I)V
    .locals 0

    invoke-super {p0, p1}, Landroid/telephony/PhoneStateListener;->onSignalStrengthChanged(I)V

    return-void
.end method

.method public final onSignalStrengthsChanged(Landroid/telephony/SignalStrength;)V
    .locals 1

    if-nez p1, :cond_0

    return-void

    :cond_0
    iget-object v0, p0, Lcom/loc/fb$b;->a:Lcom/loc/fb;

    iput-object p1, v0, Lcom/loc/fb;->d:Landroid/telephony/SignalStrength;

    :try_start_0
    iget-object p1, p0, Lcom/loc/fb$b;->a:Lcom/loc/fb;

    invoke-static {p1}, Lcom/loc/fb;->e(Lcom/loc/fb;)Lcom/loc/es;

    move-result-object p1

    if-eqz p1, :cond_1

    iget-object p1, p0, Lcom/loc/fb$b;->a:Lcom/loc/fb;

    invoke-static {p1}, Lcom/loc/fb;->e(Lcom/loc/fb;)Lcom/loc/es;

    move-result-object p1

    invoke-virtual {p1}, Lcom/loc/es;->c()V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :catchall_0
    :cond_1
    return-void
.end method
