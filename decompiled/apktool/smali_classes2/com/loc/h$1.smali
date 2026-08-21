.class final Lcom/loc/h$1;
.super Landroid/location/GnssStatus$Callback;
.source "GpsLocation.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/loc/h;->i()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/loc/h;


# direct methods
.method constructor <init>(Lcom/loc/h;)V
    .locals 0

    iput-object p1, p0, Lcom/loc/h$1;->a:Lcom/loc/h;

    invoke-direct {p0}, Landroid/location/GnssStatus$Callback;-><init>()V

    return-void
.end method


# virtual methods
.method public final onFirstFix(I)V
    .locals 0

    invoke-static {}, Lcom/loc/h;->h()V

    return-void
.end method

.method public final onSatelliteStatusChanged(Landroid/location/GnssStatus;)V
    .locals 1

    iget-object v0, p0, Lcom/loc/h$1;->a:Lcom/loc/h;

    invoke-static {v0, p1}, Lcom/loc/h;->a(Lcom/loc/h;Landroid/location/GnssStatus;)V

    return-void
.end method

.method public final onStarted()V
    .locals 0

    invoke-static {}, Lcom/loc/h;->g()V

    return-void
.end method

.method public final onStopped()V
    .locals 1

    iget-object v0, p0, Lcom/loc/h$1;->a:Lcom/loc/h;

    invoke-static {v0}, Lcom/loc/h;->a(Lcom/loc/h;)V

    return-void
.end method
