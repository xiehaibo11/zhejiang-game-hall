.class public final Lcom/czhj/sdk/common/models/Geo$Builder;
.super Lcom/czhj/wire/Message$Builder;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/czhj/sdk/common/models/Geo;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x19
    name = "Builder"
.end annotation

.annotation system Ldalvik/annotation/Signature;
    value = {
        "Lcom/czhj/wire/Message$Builder<",
        "Lcom/czhj/sdk/common/models/Geo;",
        "Lcom/czhj/sdk/common/models/Geo$Builder;",
        ">;"
    }
.end annotation


# instance fields
.field public accuracy:Ljava/lang/Double;

.field public city_code:Ljava/lang/Long;

.field public country:Ljava/lang/String;

.field public language:Ljava/lang/String;

.field public lat:Ljava/lang/Float;

.field public lon:Ljava/lang/Float;

.field public region_code:Ljava/lang/String;

.field public secondsFromGMT:Ljava/lang/String;

.field public timeZone:Ljava/lang/String;


# direct methods
.method public constructor <init>()V
    .locals 2

    invoke-direct {p0}, Lcom/czhj/wire/Message$Builder;-><init>()V

    sget-object v0, Lcom/czhj/sdk/common/models/Geo;->DEFAULT_LAT:Ljava/lang/Float;

    iput-object v0, p0, Lcom/czhj/sdk/common/models/Geo$Builder;->lat:Ljava/lang/Float;

    sget-object v0, Lcom/czhj/sdk/common/models/Geo;->DEFAULT_LON:Ljava/lang/Float;

    iput-object v0, p0, Lcom/czhj/sdk/common/models/Geo$Builder;->lon:Ljava/lang/Float;

    const-string v0, ""

    iput-object v0, p0, Lcom/czhj/sdk/common/models/Geo$Builder;->language:Ljava/lang/String;

    iput-object v0, p0, Lcom/czhj/sdk/common/models/Geo$Builder;->timeZone:Ljava/lang/String;

    sget-object v1, Lcom/czhj/sdk/common/models/Geo;->DEFAULT_CITY_CODE:Ljava/lang/Long;

    iput-object v1, p0, Lcom/czhj/sdk/common/models/Geo$Builder;->city_code:Ljava/lang/Long;

    iput-object v0, p0, Lcom/czhj/sdk/common/models/Geo$Builder;->country:Ljava/lang/String;

    iput-object v0, p0, Lcom/czhj/sdk/common/models/Geo$Builder;->region_code:Ljava/lang/String;

    iput-object v0, p0, Lcom/czhj/sdk/common/models/Geo$Builder;->secondsFromGMT:Ljava/lang/String;

    sget-object v0, Lcom/czhj/sdk/common/models/Geo;->DEFAULT_ACCURACY:Ljava/lang/Double;

    iput-object v0, p0, Lcom/czhj/sdk/common/models/Geo$Builder;->accuracy:Ljava/lang/Double;

    return-void
.end method


# virtual methods
.method public accuracy(Ljava/lang/Double;)Lcom/czhj/sdk/common/models/Geo$Builder;
    .locals 0

    iput-object p1, p0, Lcom/czhj/sdk/common/models/Geo$Builder;->accuracy:Ljava/lang/Double;

    return-object p0
.end method

.method public build()Lcom/czhj/sdk/common/models/Geo;
    .locals 12

    new-instance v11, Lcom/czhj/sdk/common/models/Geo;

    iget-object v1, p0, Lcom/czhj/sdk/common/models/Geo$Builder;->lat:Ljava/lang/Float;

    iget-object v2, p0, Lcom/czhj/sdk/common/models/Geo$Builder;->lon:Ljava/lang/Float;

    iget-object v3, p0, Lcom/czhj/sdk/common/models/Geo$Builder;->language:Ljava/lang/String;

    iget-object v4, p0, Lcom/czhj/sdk/common/models/Geo$Builder;->timeZone:Ljava/lang/String;

    iget-object v5, p0, Lcom/czhj/sdk/common/models/Geo$Builder;->city_code:Ljava/lang/Long;

    iget-object v6, p0, Lcom/czhj/sdk/common/models/Geo$Builder;->country:Ljava/lang/String;

    iget-object v7, p0, Lcom/czhj/sdk/common/models/Geo$Builder;->region_code:Ljava/lang/String;

    iget-object v8, p0, Lcom/czhj/sdk/common/models/Geo$Builder;->secondsFromGMT:Ljava/lang/String;

    iget-object v9, p0, Lcom/czhj/sdk/common/models/Geo$Builder;->accuracy:Ljava/lang/Double;

    invoke-super {p0}, Lcom/czhj/wire/Message$Builder;->buildUnknownFields()Lcom/czhj/wire/okio/ByteString;

    move-result-object v10

    move-object v0, v11

    invoke-direct/range {v0 .. v10}, Lcom/czhj/sdk/common/models/Geo;-><init>(Ljava/lang/Float;Ljava/lang/Float;Ljava/lang/String;Ljava/lang/String;Ljava/lang/Long;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/Double;Lcom/czhj/wire/okio/ByteString;)V

    return-object v11
.end method

.method public bridge synthetic build()Lcom/czhj/wire/Message;
    .locals 1

    invoke-virtual {p0}, Lcom/czhj/sdk/common/models/Geo$Builder;->build()Lcom/czhj/sdk/common/models/Geo;

    move-result-object v0

    return-object v0
.end method

.method public city_code(Ljava/lang/Long;)Lcom/czhj/sdk/common/models/Geo$Builder;
    .locals 0

    iput-object p1, p0, Lcom/czhj/sdk/common/models/Geo$Builder;->city_code:Ljava/lang/Long;

    return-object p0
.end method

.method public country(Ljava/lang/String;)Lcom/czhj/sdk/common/models/Geo$Builder;
    .locals 0

    iput-object p1, p0, Lcom/czhj/sdk/common/models/Geo$Builder;->country:Ljava/lang/String;

    return-object p0
.end method

.method public language(Ljava/lang/String;)Lcom/czhj/sdk/common/models/Geo$Builder;
    .locals 0

    iput-object p1, p0, Lcom/czhj/sdk/common/models/Geo$Builder;->language:Ljava/lang/String;

    return-object p0
.end method

.method public lat(Ljava/lang/Float;)Lcom/czhj/sdk/common/models/Geo$Builder;
    .locals 0

    iput-object p1, p0, Lcom/czhj/sdk/common/models/Geo$Builder;->lat:Ljava/lang/Float;

    return-object p0
.end method

.method public lon(Ljava/lang/Float;)Lcom/czhj/sdk/common/models/Geo$Builder;
    .locals 0

    iput-object p1, p0, Lcom/czhj/sdk/common/models/Geo$Builder;->lon:Ljava/lang/Float;

    return-object p0
.end method

.method public region_code(Ljava/lang/String;)Lcom/czhj/sdk/common/models/Geo$Builder;
    .locals 0

    iput-object p1, p0, Lcom/czhj/sdk/common/models/Geo$Builder;->region_code:Ljava/lang/String;

    return-object p0
.end method

.method public secondsFromGMT(Ljava/lang/String;)Lcom/czhj/sdk/common/models/Geo$Builder;
    .locals 0

    iput-object p1, p0, Lcom/czhj/sdk/common/models/Geo$Builder;->secondsFromGMT:Ljava/lang/String;

    return-object p0
.end method

.method public timeZone(Ljava/lang/String;)Lcom/czhj/sdk/common/models/Geo$Builder;
    .locals 0

    iput-object p1, p0, Lcom/czhj/sdk/common/models/Geo$Builder;->timeZone:Ljava/lang/String;

    return-object p0
.end method
