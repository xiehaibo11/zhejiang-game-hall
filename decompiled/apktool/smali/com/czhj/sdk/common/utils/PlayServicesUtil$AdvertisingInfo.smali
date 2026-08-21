.class public Lcom/czhj/sdk/common/utils/PlayServicesUtil$AdvertisingInfo;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/czhj/sdk/common/utils/PlayServicesUtil;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x9
    name = "AdvertisingInfo"
.end annotation


# instance fields
.field public final advertisingId:Ljava/lang/String;

.field public final limitAdTracking:Z


# direct methods
.method constructor <init>(Ljava/lang/String;Z)V
    .locals 0

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    iput-object p1, p0, Lcom/czhj/sdk/common/utils/PlayServicesUtil$AdvertisingInfo;->advertisingId:Ljava/lang/String;

    iput-boolean p2, p0, Lcom/czhj/sdk/common/utils/PlayServicesUtil$AdvertisingInfo;->limitAdTracking:Z

    return-void
.end method
