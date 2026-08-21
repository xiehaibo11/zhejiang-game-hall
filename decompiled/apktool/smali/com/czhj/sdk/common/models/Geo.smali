.class public final Lcom/czhj/sdk/common/models/Geo;
.super Lcom/czhj/wire/AndroidMessage;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/czhj/sdk/common/models/Geo$ProtoAdapter_Geo;,
        Lcom/czhj/sdk/common/models/Geo$Builder;
    }
.end annotation

.annotation system Ldalvik/annotation/Signature;
    value = {
        "Lcom/czhj/wire/AndroidMessage<",
        "Lcom/czhj/sdk/common/models/Geo;",
        "Lcom/czhj/sdk/common/models/Geo$Builder;",
        ">;"
    }
.end annotation


# static fields
.field public static final ADAPTER:Lcom/czhj/wire/ProtoAdapter;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Lcom/czhj/wire/ProtoAdapter<",
            "Lcom/czhj/sdk/common/models/Geo;",
            ">;"
        }
    .end annotation
.end field

.field public static final CREATOR:Landroid/os/Parcelable$Creator;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Landroid/os/Parcelable$Creator<",
            "Lcom/czhj/sdk/common/models/Geo;",
            ">;"
        }
    .end annotation
.end field

.field public static final DEFAULT_ACCURACY:Ljava/lang/Double;

.field public static final DEFAULT_CITY_CODE:Ljava/lang/Long;

.field public static final DEFAULT_COUNTRY:Ljava/lang/String; = ""

.field public static final DEFAULT_LANGUAGE:Ljava/lang/String; = ""

.field public static final DEFAULT_LAT:Ljava/lang/Float;

.field public static final DEFAULT_LON:Ljava/lang/Float;

.field public static final DEFAULT_REGION_CODE:Ljava/lang/String; = ""

.field public static final DEFAULT_SECONDSFROMGMT:Ljava/lang/String; = ""

.field public static final DEFAULT_TIMEZONE:Ljava/lang/String; = ""

.field private static final serialVersionUID:J


# instance fields
.field public final accuracy:Ljava/lang/Double;
    .annotation runtime Lcom/czhj/wire/WireField;
        adapter = "com.squareup.wire.ProtoAdapter#DOUBLE"
        tag = 0x9
    .end annotation
.end field

.field public final city_code:Ljava/lang/Long;
    .annotation runtime Lcom/czhj/wire/WireField;
        adapter = "com.squareup.wire.ProtoAdapter#UINT64"
        tag = 0x5
    .end annotation
.end field

.field public final country:Ljava/lang/String;
    .annotation runtime Lcom/czhj/wire/WireField;
        adapter = "com.squareup.wire.ProtoAdapter#STRING"
        tag = 0x6
    .end annotation
.end field

.field public final language:Ljava/lang/String;
    .annotation runtime Lcom/czhj/wire/WireField;
        adapter = "com.squareup.wire.ProtoAdapter#STRING"
        tag = 0x3
    .end annotation
.end field

.field public final lat:Ljava/lang/Float;
    .annotation runtime Lcom/czhj/wire/WireField;
        adapter = "com.squareup.wire.ProtoAdapter#FLOAT"
        tag = 0x1
    .end annotation
.end field

.field public final lon:Ljava/lang/Float;
    .annotation runtime Lcom/czhj/wire/WireField;
        adapter = "com.squareup.wire.ProtoAdapter#FLOAT"
        tag = 0x2
    .end annotation
.end field

.field public final region_code:Ljava/lang/String;
    .annotation runtime Lcom/czhj/wire/WireField;
        adapter = "com.squareup.wire.ProtoAdapter#STRING"
        tag = 0x7
    .end annotation
.end field

.field public final secondsFromGMT:Ljava/lang/String;
    .annotation runtime Lcom/czhj/wire/WireField;
        adapter = "com.squareup.wire.ProtoAdapter#STRING"
        tag = 0x8
    .end annotation
.end field

.field public final timeZone:Ljava/lang/String;
    .annotation runtime Lcom/czhj/wire/WireField;
        adapter = "com.squareup.wire.ProtoAdapter#STRING"
        tag = 0x4
    .end annotation
.end field


# direct methods
.method static constructor <clinit>()V
    .locals 2

    new-instance v0, Lcom/czhj/sdk/common/models/Geo$ProtoAdapter_Geo;

    invoke-direct {v0}, Lcom/czhj/sdk/common/models/Geo$ProtoAdapter_Geo;-><init>()V

    sput-object v0, Lcom/czhj/sdk/common/models/Geo;->ADAPTER:Lcom/czhj/wire/ProtoAdapter;

    invoke-static {v0}, Lcom/czhj/wire/AndroidMessage;->newCreator(Lcom/czhj/wire/ProtoAdapter;)Landroid/os/Parcelable$Creator;

    move-result-object v0

    sput-object v0, Lcom/czhj/sdk/common/models/Geo;->CREATOR:Landroid/os/Parcelable$Creator;

    const/4 v0, 0x0

    invoke-static {v0}, Ljava/lang/Float;->valueOf(F)Ljava/lang/Float;

    move-result-object v0

    sput-object v0, Lcom/czhj/sdk/common/models/Geo;->DEFAULT_LAT:Ljava/lang/Float;

    sput-object v0, Lcom/czhj/sdk/common/models/Geo;->DEFAULT_LON:Ljava/lang/Float;

    const-wide/16 v0, 0x0

    invoke-static {v0, v1}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object v0

    sput-object v0, Lcom/czhj/sdk/common/models/Geo;->DEFAULT_CITY_CODE:Ljava/lang/Long;

    const-wide/16 v0, 0x0

    invoke-static {v0, v1}, Ljava/lang/Double;->valueOf(D)Ljava/lang/Double;

    move-result-object v0

    sput-object v0, Lcom/czhj/sdk/common/models/Geo;->DEFAULT_ACCURACY:Ljava/lang/Double;

    return-void
.end method

.method public constructor <init>(Ljava/lang/Float;Ljava/lang/Float;Ljava/lang/String;Ljava/lang/String;Ljava/lang/Long;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/Double;)V
    .locals 11

    sget-object v10, Lcom/czhj/wire/okio/ByteString;->EMPTY:Lcom/czhj/wire/okio/ByteString;

    move-object v0, p0

    move-object v1, p1

    move-object v2, p2

    move-object v3, p3

    move-object v4, p4

    move-object/from16 v5, p5

    move-object/from16 v6, p6

    move-object/from16 v7, p7

    move-object/from16 v8, p8

    move-object/from16 v9, p9

    invoke-direct/range {v0 .. v10}, Lcom/czhj/sdk/common/models/Geo;-><init>(Ljava/lang/Float;Ljava/lang/Float;Ljava/lang/String;Ljava/lang/String;Ljava/lang/Long;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/Double;Lcom/czhj/wire/okio/ByteString;)V

    return-void
.end method

.method public constructor <init>(Ljava/lang/Float;Ljava/lang/Float;Ljava/lang/String;Ljava/lang/String;Ljava/lang/Long;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/Double;Lcom/czhj/wire/okio/ByteString;)V
    .locals 1

    sget-object v0, Lcom/czhj/sdk/common/models/Geo;->ADAPTER:Lcom/czhj/wire/ProtoAdapter;

    invoke-direct {p0, v0, p10}, Lcom/czhj/wire/AndroidMessage;-><init>(Lcom/czhj/wire/ProtoAdapter;Lcom/czhj/wire/okio/ByteString;)V

    iput-object p1, p0, Lcom/czhj/sdk/common/models/Geo;->lat:Ljava/lang/Float;

    iput-object p2, p0, Lcom/czhj/sdk/common/models/Geo;->lon:Ljava/lang/Float;

    iput-object p3, p0, Lcom/czhj/sdk/common/models/Geo;->language:Ljava/lang/String;

    iput-object p4, p0, Lcom/czhj/sdk/common/models/Geo;->timeZone:Ljava/lang/String;

    iput-object p5, p0, Lcom/czhj/sdk/common/models/Geo;->city_code:Ljava/lang/Long;

    iput-object p6, p0, Lcom/czhj/sdk/common/models/Geo;->country:Ljava/lang/String;

    iput-object p7, p0, Lcom/czhj/sdk/common/models/Geo;->region_code:Ljava/lang/String;

    iput-object p8, p0, Lcom/czhj/sdk/common/models/Geo;->secondsFromGMT:Ljava/lang/String;

    iput-object p9, p0, Lcom/czhj/sdk/common/models/Geo;->accuracy:Ljava/lang/Double;

    return-void
.end method


# virtual methods
.method public equals(Ljava/lang/Object;)Z
    .locals 4

    const/4 v0, 0x1

    if-ne p1, p0, :cond_0

    return v0

    :cond_0
    instance-of v1, p1, Lcom/czhj/sdk/common/models/Geo;

    const/4 v2, 0x0

    if-nez v1, :cond_1

    return v2

    :cond_1
    check-cast p1, Lcom/czhj/sdk/common/models/Geo;

    invoke-virtual {p0}, Lcom/czhj/sdk/common/models/Geo;->unknownFields()Lcom/czhj/wire/okio/ByteString;

    move-result-object v1

    invoke-virtual {p1}, Lcom/czhj/sdk/common/models/Geo;->unknownFields()Lcom/czhj/wire/okio/ByteString;

    move-result-object v3

    invoke-virtual {v1, v3}, Lcom/czhj/wire/okio/ByteString;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2

    iget-object v1, p0, Lcom/czhj/sdk/common/models/Geo;->lat:Ljava/lang/Float;

    iget-object v3, p1, Lcom/czhj/sdk/common/models/Geo;->lat:Ljava/lang/Float;

    invoke-static {v1, v3}, Lcom/czhj/wire/internal/Internal;->equals(Ljava/lang/Object;Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2

    iget-object v1, p0, Lcom/czhj/sdk/common/models/Geo;->lon:Ljava/lang/Float;

    iget-object v3, p1, Lcom/czhj/sdk/common/models/Geo;->lon:Ljava/lang/Float;

    invoke-static {v1, v3}, Lcom/czhj/wire/internal/Internal;->equals(Ljava/lang/Object;Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2

    iget-object v1, p0, Lcom/czhj/sdk/common/models/Geo;->language:Ljava/lang/String;

    iget-object v3, p1, Lcom/czhj/sdk/common/models/Geo;->language:Ljava/lang/String;

    invoke-static {v1, v3}, Lcom/czhj/wire/internal/Internal;->equals(Ljava/lang/Object;Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2

    iget-object v1, p0, Lcom/czhj/sdk/common/models/Geo;->timeZone:Ljava/lang/String;

    iget-object v3, p1, Lcom/czhj/sdk/common/models/Geo;->timeZone:Ljava/lang/String;

    invoke-static {v1, v3}, Lcom/czhj/wire/internal/Internal;->equals(Ljava/lang/Object;Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2

    iget-object v1, p0, Lcom/czhj/sdk/common/models/Geo;->city_code:Ljava/lang/Long;

    iget-object v3, p1, Lcom/czhj/sdk/common/models/Geo;->city_code:Ljava/lang/Long;

    invoke-static {v1, v3}, Lcom/czhj/wire/internal/Internal;->equals(Ljava/lang/Object;Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2

    iget-object v1, p0, Lcom/czhj/sdk/common/models/Geo;->country:Ljava/lang/String;

    iget-object v3, p1, Lcom/czhj/sdk/common/models/Geo;->country:Ljava/lang/String;

    invoke-static {v1, v3}, Lcom/czhj/wire/internal/Internal;->equals(Ljava/lang/Object;Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2

    iget-object v1, p0, Lcom/czhj/sdk/common/models/Geo;->region_code:Ljava/lang/String;

    iget-object v3, p1, Lcom/czhj/sdk/common/models/Geo;->region_code:Ljava/lang/String;

    invoke-static {v1, v3}, Lcom/czhj/wire/internal/Internal;->equals(Ljava/lang/Object;Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2

    iget-object v1, p0, Lcom/czhj/sdk/common/models/Geo;->secondsFromGMT:Ljava/lang/String;

    iget-object v3, p1, Lcom/czhj/sdk/common/models/Geo;->secondsFromGMT:Ljava/lang/String;

    invoke-static {v1, v3}, Lcom/czhj/wire/internal/Internal;->equals(Ljava/lang/Object;Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2

    iget-object v1, p0, Lcom/czhj/sdk/common/models/Geo;->accuracy:Ljava/lang/Double;

    iget-object p1, p1, Lcom/czhj/sdk/common/models/Geo;->accuracy:Ljava/lang/Double;

    invoke-static {v1, p1}, Lcom/czhj/wire/internal/Internal;->equals(Ljava/lang/Object;Ljava/lang/Object;)Z

    move-result p1

    if-eqz p1, :cond_2

    goto :goto_0

    :cond_2
    move v0, v2

    :goto_0
    return v0
.end method

.method public hashCode()I
    .locals 3

    iget v0, p0, Lcom/czhj/wire/AndroidMessage;->hashCode:I

    if-nez v0, :cond_9

    invoke-virtual {p0}, Lcom/czhj/sdk/common/models/Geo;->unknownFields()Lcom/czhj/wire/okio/ByteString;

    move-result-object v0

    invoke-virtual {v0}, Lcom/czhj/wire/okio/ByteString;->hashCode()I

    move-result v0

    mul-int/lit8 v0, v0, 0x25

    iget-object v1, p0, Lcom/czhj/sdk/common/models/Geo;->lat:Ljava/lang/Float;

    const/4 v2, 0x0

    if-eqz v1, :cond_0

    invoke-virtual {v1}, Ljava/lang/Float;->hashCode()I

    move-result v1

    goto :goto_0

    :cond_0
    move v1, v2

    :goto_0
    add-int/2addr v0, v1

    mul-int/lit8 v0, v0, 0x25

    iget-object v1, p0, Lcom/czhj/sdk/common/models/Geo;->lon:Ljava/lang/Float;

    if-eqz v1, :cond_1

    invoke-virtual {v1}, Ljava/lang/Float;->hashCode()I

    move-result v1

    goto :goto_1

    :cond_1
    move v1, v2

    :goto_1
    add-int/2addr v0, v1

    mul-int/lit8 v0, v0, 0x25

    iget-object v1, p0, Lcom/czhj/sdk/common/models/Geo;->language:Ljava/lang/String;

    if-eqz v1, :cond_2

    invoke-virtual {v1}, Ljava/lang/String;->hashCode()I

    move-result v1

    goto :goto_2

    :cond_2
    move v1, v2

    :goto_2
    add-int/2addr v0, v1

    mul-int/lit8 v0, v0, 0x25

    iget-object v1, p0, Lcom/czhj/sdk/common/models/Geo;->timeZone:Ljava/lang/String;

    if-eqz v1, :cond_3

    invoke-virtual {v1}, Ljava/lang/String;->hashCode()I

    move-result v1

    goto :goto_3

    :cond_3
    move v1, v2

    :goto_3
    add-int/2addr v0, v1

    mul-int/lit8 v0, v0, 0x25

    iget-object v1, p0, Lcom/czhj/sdk/common/models/Geo;->city_code:Ljava/lang/Long;

    if-eqz v1, :cond_4

    invoke-virtual {v1}, Ljava/lang/Long;->hashCode()I

    move-result v1

    goto :goto_4

    :cond_4
    move v1, v2

    :goto_4
    add-int/2addr v0, v1

    mul-int/lit8 v0, v0, 0x25

    iget-object v1, p0, Lcom/czhj/sdk/common/models/Geo;->country:Ljava/lang/String;

    if-eqz v1, :cond_5

    invoke-virtual {v1}, Ljava/lang/String;->hashCode()I

    move-result v1

    goto :goto_5

    :cond_5
    move v1, v2

    :goto_5
    add-int/2addr v0, v1

    mul-int/lit8 v0, v0, 0x25

    iget-object v1, p0, Lcom/czhj/sdk/common/models/Geo;->region_code:Ljava/lang/String;

    if-eqz v1, :cond_6

    invoke-virtual {v1}, Ljava/lang/String;->hashCode()I

    move-result v1

    goto :goto_6

    :cond_6
    move v1, v2

    :goto_6
    add-int/2addr v0, v1

    mul-int/lit8 v0, v0, 0x25

    iget-object v1, p0, Lcom/czhj/sdk/common/models/Geo;->secondsFromGMT:Ljava/lang/String;

    if-eqz v1, :cond_7

    invoke-virtual {v1}, Ljava/lang/String;->hashCode()I

    move-result v1

    goto :goto_7

    :cond_7
    move v1, v2

    :goto_7
    add-int/2addr v0, v1

    mul-int/lit8 v0, v0, 0x25

    iget-object v1, p0, Lcom/czhj/sdk/common/models/Geo;->accuracy:Ljava/lang/Double;

    if-eqz v1, :cond_8

    invoke-virtual {v1}, Ljava/lang/Double;->hashCode()I

    move-result v2

    :cond_8
    add-int/2addr v0, v2

    iput v0, p0, Lcom/czhj/wire/AndroidMessage;->hashCode:I

    :cond_9
    return v0
.end method

.method public newBuilder()Lcom/czhj/sdk/common/models/Geo$Builder;
    .locals 2

    new-instance v0, Lcom/czhj/sdk/common/models/Geo$Builder;

    invoke-direct {v0}, Lcom/czhj/sdk/common/models/Geo$Builder;-><init>()V

    iget-object v1, p0, Lcom/czhj/sdk/common/models/Geo;->lat:Ljava/lang/Float;

    iput-object v1, v0, Lcom/czhj/sdk/common/models/Geo$Builder;->lat:Ljava/lang/Float;

    iget-object v1, p0, Lcom/czhj/sdk/common/models/Geo;->lon:Ljava/lang/Float;

    iput-object v1, v0, Lcom/czhj/sdk/common/models/Geo$Builder;->lon:Ljava/lang/Float;

    iget-object v1, p0, Lcom/czhj/sdk/common/models/Geo;->language:Ljava/lang/String;

    iput-object v1, v0, Lcom/czhj/sdk/common/models/Geo$Builder;->language:Ljava/lang/String;

    iget-object v1, p0, Lcom/czhj/sdk/common/models/Geo;->timeZone:Ljava/lang/String;

    iput-object v1, v0, Lcom/czhj/sdk/common/models/Geo$Builder;->timeZone:Ljava/lang/String;

    iget-object v1, p0, Lcom/czhj/sdk/common/models/Geo;->city_code:Ljava/lang/Long;

    iput-object v1, v0, Lcom/czhj/sdk/common/models/Geo$Builder;->city_code:Ljava/lang/Long;

    iget-object v1, p0, Lcom/czhj/sdk/common/models/Geo;->country:Ljava/lang/String;

    iput-object v1, v0, Lcom/czhj/sdk/common/models/Geo$Builder;->country:Ljava/lang/String;

    iget-object v1, p0, Lcom/czhj/sdk/common/models/Geo;->region_code:Ljava/lang/String;

    iput-object v1, v0, Lcom/czhj/sdk/common/models/Geo$Builder;->region_code:Ljava/lang/String;

    iget-object v1, p0, Lcom/czhj/sdk/common/models/Geo;->secondsFromGMT:Ljava/lang/String;

    iput-object v1, v0, Lcom/czhj/sdk/common/models/Geo$Builder;->secondsFromGMT:Ljava/lang/String;

    iget-object v1, p0, Lcom/czhj/sdk/common/models/Geo;->accuracy:Ljava/lang/Double;

    iput-object v1, v0, Lcom/czhj/sdk/common/models/Geo$Builder;->accuracy:Ljava/lang/Double;

    invoke-virtual {p0}, Lcom/czhj/sdk/common/models/Geo;->unknownFields()Lcom/czhj/wire/okio/ByteString;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/czhj/sdk/common/models/Geo$Builder;->addUnknownFields(Lcom/czhj/wire/okio/ByteString;)Lcom/czhj/wire/Message$Builder;

    return-object v0
.end method

.method public bridge synthetic newBuilder()Lcom/czhj/wire/Message$Builder;
    .locals 1

    invoke-virtual {p0}, Lcom/czhj/sdk/common/models/Geo;->newBuilder()Lcom/czhj/sdk/common/models/Geo$Builder;

    move-result-object v0

    return-object v0
.end method

.method public toString()Ljava/lang/String;
    .locals 4

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v1, p0, Lcom/czhj/sdk/common/models/Geo;->lat:Ljava/lang/Float;

    if-eqz v1, :cond_0

    const-string v1, ", lat="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/czhj/sdk/common/models/Geo;->lat:Ljava/lang/Float;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    :cond_0
    iget-object v1, p0, Lcom/czhj/sdk/common/models/Geo;->lon:Ljava/lang/Float;

    if-eqz v1, :cond_1

    const-string v1, ", lon="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/czhj/sdk/common/models/Geo;->lon:Ljava/lang/Float;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    :cond_1
    iget-object v1, p0, Lcom/czhj/sdk/common/models/Geo;->language:Ljava/lang/String;

    if-eqz v1, :cond_2

    const-string v1, ", language="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/czhj/sdk/common/models/Geo;->language:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    :cond_2
    iget-object v1, p0, Lcom/czhj/sdk/common/models/Geo;->timeZone:Ljava/lang/String;

    if-eqz v1, :cond_3

    const-string v1, ", timeZone="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/czhj/sdk/common/models/Geo;->timeZone:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    :cond_3
    iget-object v1, p0, Lcom/czhj/sdk/common/models/Geo;->city_code:Ljava/lang/Long;

    if-eqz v1, :cond_4

    const-string v1, ", city_code="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/czhj/sdk/common/models/Geo;->city_code:Ljava/lang/Long;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    :cond_4
    iget-object v1, p0, Lcom/czhj/sdk/common/models/Geo;->country:Ljava/lang/String;

    if-eqz v1, :cond_5

    const-string v1, ", country="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/czhj/sdk/common/models/Geo;->country:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    :cond_5
    iget-object v1, p0, Lcom/czhj/sdk/common/models/Geo;->region_code:Ljava/lang/String;

    if-eqz v1, :cond_6

    const-string v1, ", region_code="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/czhj/sdk/common/models/Geo;->region_code:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    :cond_6
    iget-object v1, p0, Lcom/czhj/sdk/common/models/Geo;->secondsFromGMT:Ljava/lang/String;

    if-eqz v1, :cond_7

    const-string v1, ", secondsFromGMT="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/czhj/sdk/common/models/Geo;->secondsFromGMT:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    :cond_7
    iget-object v1, p0, Lcom/czhj/sdk/common/models/Geo;->accuracy:Ljava/lang/Double;

    if-eqz v1, :cond_8

    const-string v1, ", accuracy="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/czhj/sdk/common/models/Geo;->accuracy:Ljava/lang/Double;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    :cond_8
    const/4 v1, 0x0

    const/4 v2, 0x2

    const-string v3, "Geo{"

    invoke-virtual {v0, v1, v2, v3}, Ljava/lang/StringBuilder;->replace(IILjava/lang/String;)Ljava/lang/StringBuilder;

    move-result-object v0

    const/16 v1, 0x7d

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(C)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method
