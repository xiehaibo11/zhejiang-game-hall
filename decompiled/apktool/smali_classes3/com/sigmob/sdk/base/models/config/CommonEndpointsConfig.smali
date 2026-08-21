.class public final Lcom/sigmob/sdk/base/models/config/CommonEndpointsConfig;
.super Lcom/czhj/wire/AndroidMessage;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/sigmob/sdk/base/models/config/CommonEndpointsConfig$ProtoAdapter_CommonEndpointsConfig;,
        Lcom/sigmob/sdk/base/models/config/CommonEndpointsConfig$Builder;
    }
.end annotation

.annotation system Ldalvik/annotation/Signature;
    value = {
        "Lcom/czhj/wire/AndroidMessage<",
        "Lcom/sigmob/sdk/base/models/config/CommonEndpointsConfig;",
        "Lcom/sigmob/sdk/base/models/config/CommonEndpointsConfig$Builder;",
        ">;"
    }
.end annotation


# static fields
.field public static final ADAPTER:Lcom/czhj/wire/ProtoAdapter;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Lcom/czhj/wire/ProtoAdapter<",
            "Lcom/sigmob/sdk/base/models/config/CommonEndpointsConfig;",
            ">;"
        }
    .end annotation
.end field

.field public static final CREATOR:Landroid/os/Parcelable$Creator;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Landroid/os/Parcelable$Creator<",
            "Lcom/sigmob/sdk/base/models/config/CommonEndpointsConfig;",
            ">;"
        }
    .end annotation
.end field

.field public static final DEFAULT_ADS:Ljava/lang/String; = ""

.field public static final DEFAULT_HB_ADS:Ljava/lang/String; = ""

.field public static final DEFAULT_LOG:Ljava/lang/String; = ""

.field private static final serialVersionUID:J


# instance fields
.field public final ads:Ljava/lang/String;
    .annotation runtime Lcom/czhj/wire/WireField;
        adapter = "com.squareup.wire.ProtoAdapter#STRING"
        tag = 0x2
    .end annotation
.end field

.field public final hb_ads:Ljava/lang/String;
    .annotation runtime Lcom/czhj/wire/WireField;
        adapter = "com.squareup.wire.ProtoAdapter#STRING"
        tag = 0x3
    .end annotation
.end field

.field public final log:Ljava/lang/String;
    .annotation runtime Lcom/czhj/wire/WireField;
        adapter = "com.squareup.wire.ProtoAdapter#STRING"
        tag = 0x1
    .end annotation
.end field


# direct methods
.method static constructor <clinit>()V
    .locals 1

    new-instance v0, Lcom/sigmob/sdk/base/models/config/CommonEndpointsConfig$ProtoAdapter_CommonEndpointsConfig;

    invoke-direct {v0}, Lcom/sigmob/sdk/base/models/config/CommonEndpointsConfig$ProtoAdapter_CommonEndpointsConfig;-><init>()V

    sput-object v0, Lcom/sigmob/sdk/base/models/config/CommonEndpointsConfig;->ADAPTER:Lcom/czhj/wire/ProtoAdapter;

    invoke-static {v0}, Lcom/czhj/wire/AndroidMessage;->newCreator(Lcom/czhj/wire/ProtoAdapter;)Landroid/os/Parcelable$Creator;

    move-result-object v0

    sput-object v0, Lcom/sigmob/sdk/base/models/config/CommonEndpointsConfig;->CREATOR:Landroid/os/Parcelable$Creator;

    return-void
.end method

.method public constructor <init>(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V
    .locals 1

    sget-object v0, Lcom/czhj/wire/okio/ByteString;->EMPTY:Lcom/czhj/wire/okio/ByteString;

    invoke-direct {p0, p1, p2, p3, v0}, Lcom/sigmob/sdk/base/models/config/CommonEndpointsConfig;-><init>(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Lcom/czhj/wire/okio/ByteString;)V

    return-void
.end method

.method public constructor <init>(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Lcom/czhj/wire/okio/ByteString;)V
    .locals 1

    sget-object v0, Lcom/sigmob/sdk/base/models/config/CommonEndpointsConfig;->ADAPTER:Lcom/czhj/wire/ProtoAdapter;

    invoke-direct {p0, v0, p4}, Lcom/czhj/wire/AndroidMessage;-><init>(Lcom/czhj/wire/ProtoAdapter;Lcom/czhj/wire/okio/ByteString;)V

    iput-object p1, p0, Lcom/sigmob/sdk/base/models/config/CommonEndpointsConfig;->log:Ljava/lang/String;

    iput-object p2, p0, Lcom/sigmob/sdk/base/models/config/CommonEndpointsConfig;->ads:Ljava/lang/String;

    iput-object p3, p0, Lcom/sigmob/sdk/base/models/config/CommonEndpointsConfig;->hb_ads:Ljava/lang/String;

    return-void
.end method


# virtual methods
.method public equals(Ljava/lang/Object;)Z
    .locals 4

    const/4 v0, 0x1

    if-ne p1, p0, :cond_0

    return v0

    :cond_0
    instance-of v1, p1, Lcom/sigmob/sdk/base/models/config/CommonEndpointsConfig;

    const/4 v2, 0x0

    if-nez v1, :cond_1

    return v2

    :cond_1
    check-cast p1, Lcom/sigmob/sdk/base/models/config/CommonEndpointsConfig;

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/models/config/CommonEndpointsConfig;->unknownFields()Lcom/czhj/wire/okio/ByteString;

    move-result-object v1

    invoke-virtual {p1}, Lcom/sigmob/sdk/base/models/config/CommonEndpointsConfig;->unknownFields()Lcom/czhj/wire/okio/ByteString;

    move-result-object v3

    invoke-virtual {v1, v3}, Lcom/czhj/wire/okio/ByteString;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/config/CommonEndpointsConfig;->log:Ljava/lang/String;

    iget-object v3, p1, Lcom/sigmob/sdk/base/models/config/CommonEndpointsConfig;->log:Ljava/lang/String;

    invoke-static {v1, v3}, Lcom/czhj/wire/internal/Internal;->equals(Ljava/lang/Object;Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/config/CommonEndpointsConfig;->ads:Ljava/lang/String;

    iget-object v3, p1, Lcom/sigmob/sdk/base/models/config/CommonEndpointsConfig;->ads:Ljava/lang/String;

    invoke-static {v1, v3}, Lcom/czhj/wire/internal/Internal;->equals(Ljava/lang/Object;Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/config/CommonEndpointsConfig;->hb_ads:Ljava/lang/String;

    iget-object p1, p1, Lcom/sigmob/sdk/base/models/config/CommonEndpointsConfig;->hb_ads:Ljava/lang/String;

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

    if-nez v0, :cond_3

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/models/config/CommonEndpointsConfig;->unknownFields()Lcom/czhj/wire/okio/ByteString;

    move-result-object v0

    invoke-virtual {v0}, Lcom/czhj/wire/okio/ByteString;->hashCode()I

    move-result v0

    mul-int/lit8 v0, v0, 0x25

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/config/CommonEndpointsConfig;->log:Ljava/lang/String;

    const/4 v2, 0x0

    if-eqz v1, :cond_0

    invoke-virtual {v1}, Ljava/lang/String;->hashCode()I

    move-result v1

    goto :goto_0

    :cond_0
    move v1, v2

    :goto_0
    add-int/2addr v0, v1

    mul-int/lit8 v0, v0, 0x25

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/config/CommonEndpointsConfig;->ads:Ljava/lang/String;

    if-eqz v1, :cond_1

    invoke-virtual {v1}, Ljava/lang/String;->hashCode()I

    move-result v1

    goto :goto_1

    :cond_1
    move v1, v2

    :goto_1
    add-int/2addr v0, v1

    mul-int/lit8 v0, v0, 0x25

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/config/CommonEndpointsConfig;->hb_ads:Ljava/lang/String;

    if-eqz v1, :cond_2

    invoke-virtual {v1}, Ljava/lang/String;->hashCode()I

    move-result v2

    :cond_2
    add-int/2addr v0, v2

    iput v0, p0, Lcom/czhj/wire/AndroidMessage;->hashCode:I

    :cond_3
    return v0
.end method

.method public bridge synthetic newBuilder()Lcom/czhj/wire/Message$Builder;
    .locals 1

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/models/config/CommonEndpointsConfig;->newBuilder()Lcom/sigmob/sdk/base/models/config/CommonEndpointsConfig$Builder;

    move-result-object v0

    return-object v0
.end method

.method public newBuilder()Lcom/sigmob/sdk/base/models/config/CommonEndpointsConfig$Builder;
    .locals 2

    new-instance v0, Lcom/sigmob/sdk/base/models/config/CommonEndpointsConfig$Builder;

    invoke-direct {v0}, Lcom/sigmob/sdk/base/models/config/CommonEndpointsConfig$Builder;-><init>()V

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/config/CommonEndpointsConfig;->log:Ljava/lang/String;

    iput-object v1, v0, Lcom/sigmob/sdk/base/models/config/CommonEndpointsConfig$Builder;->log:Ljava/lang/String;

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/config/CommonEndpointsConfig;->ads:Ljava/lang/String;

    iput-object v1, v0, Lcom/sigmob/sdk/base/models/config/CommonEndpointsConfig$Builder;->ads:Ljava/lang/String;

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/config/CommonEndpointsConfig;->hb_ads:Ljava/lang/String;

    iput-object v1, v0, Lcom/sigmob/sdk/base/models/config/CommonEndpointsConfig$Builder;->hb_ads:Ljava/lang/String;

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/models/config/CommonEndpointsConfig;->unknownFields()Lcom/czhj/wire/okio/ByteString;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/sigmob/sdk/base/models/config/CommonEndpointsConfig$Builder;->addUnknownFields(Lcom/czhj/wire/okio/ByteString;)Lcom/czhj/wire/Message$Builder;

    return-object v0
.end method

.method public toString()Ljava/lang/String;
    .locals 4

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/config/CommonEndpointsConfig;->log:Ljava/lang/String;

    if-eqz v1, :cond_0

    const-string v1, ", log="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/config/CommonEndpointsConfig;->log:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    :cond_0
    iget-object v1, p0, Lcom/sigmob/sdk/base/models/config/CommonEndpointsConfig;->ads:Ljava/lang/String;

    if-eqz v1, :cond_1

    const-string v1, ", ads="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/config/CommonEndpointsConfig;->ads:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    :cond_1
    iget-object v1, p0, Lcom/sigmob/sdk/base/models/config/CommonEndpointsConfig;->hb_ads:Ljava/lang/String;

    if-eqz v1, :cond_2

    const-string v1, ", hb_ads="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/config/CommonEndpointsConfig;->hb_ads:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    :cond_2
    const/4 v1, 0x0

    const/4 v2, 0x2

    const-string v3, "CommonEndpointsConfig{"

    invoke-virtual {v0, v1, v2, v3}, Ljava/lang/StringBuilder;->replace(IILjava/lang/String;)Ljava/lang/StringBuilder;

    move-result-object v0

    const/16 v1, 0x7d

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(C)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method
