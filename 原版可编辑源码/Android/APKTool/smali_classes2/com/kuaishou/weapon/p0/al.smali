.class public Lcom/kuaishou/weapon/p0/al;
.super Ljava/lang/Object;


# direct methods
.method public constructor <init>()V
    .locals 0

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method public static a(Landroid/content/Context;)Z
    .locals 15

    const/4 v0, 0x0

    :try_start_0
    sget v1, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v2, 0x16

    const/4 v3, 0x1

    if-gt v1, v2, :cond_0

    invoke-virtual {p0}, Landroid/content/Context;->getContentResolver()Landroid/content/ContentResolver;

    move-result-object p0

    const-string v1, "mock_location"

    invoke-static {p0, v1, v0}, Landroid/provider/Settings$Secure;->getInt(Landroid/content/ContentResolver;Ljava/lang/String;I)I

    move-result p0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    if-eqz p0, :cond_2

    goto :goto_1

    :cond_0
    :try_start_1
    const-string v1, "location"

    invoke-virtual {p0, v1}, Landroid/content/Context;->getSystemService(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object p0

    check-cast p0, Landroid/location/LocationManager;

    const-string v1, "gps"

    invoke-virtual {p0, v1}, Landroid/location/LocationManager;->getProvider(Ljava/lang/String;)Landroid/location/LocationProvider;

    move-result-object v2

    if-eqz v2, :cond_1

    invoke-virtual {v2}, Landroid/location/LocationProvider;->getName()Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v2}, Landroid/location/LocationProvider;->requiresNetwork()Z

    move-result v6

    invoke-virtual {v2}, Landroid/location/LocationProvider;->requiresSatellite()Z

    move-result v7

    invoke-virtual {v2}, Landroid/location/LocationProvider;->requiresCell()Z

    move-result v8

    invoke-virtual {v2}, Landroid/location/LocationProvider;->hasMonetaryCost()Z

    move-result v9

    invoke-virtual {v2}, Landroid/location/LocationProvider;->supportsAltitude()Z

    move-result v10

    invoke-virtual {v2}, Landroid/location/LocationProvider;->supportsSpeed()Z

    move-result v11

    invoke-virtual {v2}, Landroid/location/LocationProvider;->supportsBearing()Z

    move-result v12

    invoke-virtual {v2}, Landroid/location/LocationProvider;->getPowerRequirement()I

    move-result v13

    invoke-virtual {v2}, Landroid/location/LocationProvider;->getAccuracy()I

    move-result v14

    move-object v4, p0

    invoke-virtual/range {v4 .. v14}, Landroid/location/LocationManager;->addTestProvider(Ljava/lang/String;ZZZZZZZII)V

    goto :goto_0

    :cond_1
    const/4 v6, 0x1

    const/4 v7, 0x1

    const/4 v8, 0x0

    const/4 v9, 0x0

    const/4 v10, 0x1

    const/4 v11, 0x1

    const/4 v12, 0x1

    const/4 v13, 0x3

    const/4 v14, 0x1

    move-object v4, p0

    move-object v5, v1

    invoke-virtual/range {v4 .. v14}, Landroid/location/LocationManager;->addTestProvider(Ljava/lang/String;ZZZZZZZII)V

    :goto_0
    invoke-virtual {p0, v1, v3}, Landroid/location/LocationManager;->setTestProviderEnabled(Ljava/lang/String;Z)V

    const/4 v6, 0x2

    const/4 v7, 0x0

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v8

    move-object v4, p0

    move-object v5, v1

    invoke-virtual/range {v4 .. v9}, Landroid/location/LocationManager;->setTestProviderStatus(Ljava/lang/String;ILandroid/os/Bundle;J)V
    :try_end_1
    .catch Ljava/lang/SecurityException; {:try_start_1 .. :try_end_1} :catch_0
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    :goto_1
    move v0, v3

    :catch_0
    :catchall_0
    :cond_2
    return v0
.end method
