.class final Lcom/loc/g$a;
.super Ljava/lang/Object;
.source "CoarseLocation.java"

# interfaces
.implements Landroid/location/LocationListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/loc/g;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x8
    name = "a"
.end annotation


# instance fields
.field private a:Lcom/loc/g;


# direct methods
.method constructor <init>(Lcom/loc/g;)V
    .locals 0

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    iput-object p1, p0, Lcom/loc/g$a;->a:Lcom/loc/g;

    return-void
.end method


# virtual methods
.method final a()V
    .locals 1

    const/4 v0, 0x0

    iput-object v0, p0, Lcom/loc/g$a;->a:Lcom/loc/g;

    return-void
.end method

.method public final onLocationChanged(Landroid/location/Location;)V
    .locals 1

    :try_start_0
    iget-object v0, p0, Lcom/loc/g$a;->a:Lcom/loc/g;

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/loc/g$a;->a:Lcom/loc/g;

    invoke-static {v0, p1}, Lcom/loc/g;->a(Lcom/loc/g;Landroid/location/Location;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :catchall_0
    :cond_0
    return-void
.end method

.method public final onProviderDisabled(Ljava/lang/String;)V
    .locals 0

    :try_start_0
    iget-object p1, p0, Lcom/loc/g$a;->a:Lcom/loc/g;

    if-eqz p1, :cond_0

    iget-object p1, p0, Lcom/loc/g$a;->a:Lcom/loc/g;

    invoke-static {p1}, Lcom/loc/g;->a(Lcom/loc/g;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :catchall_0
    :cond_0
    return-void
.end method

.method public final onProviderEnabled(Ljava/lang/String;)V
    .locals 1

    const-string v0, "gps"

    invoke-virtual {v0, p1}, Ljava/lang/String;->equalsIgnoreCase(Ljava/lang/String;)Z

    move-result p1

    if-eqz p1, :cond_0

    const/4 p1, 0x1

    new-array p1, p1, [Ljava/lang/Object;

    invoke-static {}, Lcom/loc/ft;->a()V

    :cond_0
    return-void
.end method

.method public final onStatusChanged(Ljava/lang/String;ILandroid/os/Bundle;)V
    .locals 0

    :try_start_0
    iget-object p1, p0, Lcom/loc/g$a;->a:Lcom/loc/g;

    if-eqz p1, :cond_0

    iget-object p1, p0, Lcom/loc/g$a;->a:Lcom/loc/g;

    invoke-static {p1, p2}, Lcom/loc/g;->a(Lcom/loc/g;I)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :catchall_0
    :cond_0
    return-void
.end method
