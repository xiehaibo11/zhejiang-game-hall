.class public final Lcom/sigmob/sdk/base/models/rtb/AdPrivacy;
.super Lcom/czhj/wire/AndroidMessage;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/sigmob/sdk/base/models/rtb/AdPrivacy$ProtoAdapter_AdPrivacy;,
        Lcom/sigmob/sdk/base/models/rtb/AdPrivacy$Builder;
    }
.end annotation

.annotation system Ldalvik/annotation/Signature;
    value = {
        "Lcom/czhj/wire/AndroidMessage<",
        "Lcom/sigmob/sdk/base/models/rtb/AdPrivacy;",
        "Lcom/sigmob/sdk/base/models/rtb/AdPrivacy$Builder;",
        ">;"
    }
.end annotation


# static fields
.field public static final ADAPTER:Lcom/czhj/wire/ProtoAdapter;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Lcom/czhj/wire/ProtoAdapter<",
            "Lcom/sigmob/sdk/base/models/rtb/AdPrivacy;",
            ">;"
        }
    .end annotation
.end field

.field public static final CREATOR:Landroid/os/Parcelable$Creator;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Landroid/os/Parcelable$Creator<",
            "Lcom/sigmob/sdk/base/models/rtb/AdPrivacy;",
            ">;"
        }
    .end annotation
.end field

.field public static final DEFAULT_PRIVACY_INFO_URL:Ljava/lang/String; = ""

.field public static final DEFAULT_PRIVACY_TEMPLATE_URL:Ljava/lang/String; = ""

.field private static final serialVersionUID:J


# instance fields
.field public final privacy_info_url:Ljava/lang/String;
    .annotation runtime Lcom/czhj/wire/WireField;
        adapter = "com.squareup.wire.ProtoAdapter#STRING"
        tag = 0x1
    .end annotation
.end field

.field public final privacy_template_info:Ljava/util/Map;
    .annotation runtime Lcom/czhj/wire/WireField;
        adapter = "com.squareup.wire.ProtoAdapter#STRING"
        keyAdapter = "com.squareup.wire.ProtoAdapter#STRING"
        tag = 0x3
    .end annotation

    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field

.field public final privacy_template_url:Ljava/lang/String;
    .annotation runtime Lcom/czhj/wire/WireField;
        adapter = "com.squareup.wire.ProtoAdapter#STRING"
        tag = 0x2
    .end annotation
.end field


# direct methods
.method static constructor <clinit>()V
    .locals 1

    new-instance v0, Lcom/sigmob/sdk/base/models/rtb/AdPrivacy$ProtoAdapter_AdPrivacy;

    invoke-direct {v0}, Lcom/sigmob/sdk/base/models/rtb/AdPrivacy$ProtoAdapter_AdPrivacy;-><init>()V

    sput-object v0, Lcom/sigmob/sdk/base/models/rtb/AdPrivacy;->ADAPTER:Lcom/czhj/wire/ProtoAdapter;

    invoke-static {v0}, Lcom/czhj/wire/AndroidMessage;->newCreator(Lcom/czhj/wire/ProtoAdapter;)Landroid/os/Parcelable$Creator;

    move-result-object v0

    sput-object v0, Lcom/sigmob/sdk/base/models/rtb/AdPrivacy;->CREATOR:Landroid/os/Parcelable$Creator;

    return-void
.end method

.method public constructor <init>(Ljava/lang/String;Ljava/lang/String;Ljava/util/Map;)V
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;)V"
        }
    .end annotation

    sget-object v0, Lcom/czhj/wire/okio/ByteString;->EMPTY:Lcom/czhj/wire/okio/ByteString;

    invoke-direct {p0, p1, p2, p3, v0}, Lcom/sigmob/sdk/base/models/rtb/AdPrivacy;-><init>(Ljava/lang/String;Ljava/lang/String;Ljava/util/Map;Lcom/czhj/wire/okio/ByteString;)V

    return-void
.end method

.method public constructor <init>(Ljava/lang/String;Ljava/lang/String;Ljava/util/Map;Lcom/czhj/wire/okio/ByteString;)V
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;",
            "Lcom/czhj/wire/okio/ByteString;",
            ")V"
        }
    .end annotation

    sget-object v0, Lcom/sigmob/sdk/base/models/rtb/AdPrivacy;->ADAPTER:Lcom/czhj/wire/ProtoAdapter;

    invoke-direct {p0, v0, p4}, Lcom/czhj/wire/AndroidMessage;-><init>(Lcom/czhj/wire/ProtoAdapter;Lcom/czhj/wire/okio/ByteString;)V

    iput-object p1, p0, Lcom/sigmob/sdk/base/models/rtb/AdPrivacy;->privacy_info_url:Ljava/lang/String;

    iput-object p2, p0, Lcom/sigmob/sdk/base/models/rtb/AdPrivacy;->privacy_template_url:Ljava/lang/String;

    const-string p1, "privacy_template_info"

    invoke-static {p1, p3}, Lcom/czhj/wire/internal/Internal;->immutableCopyOf(Ljava/lang/String;Ljava/util/Map;)Ljava/util/Map;

    move-result-object p1

    iput-object p1, p0, Lcom/sigmob/sdk/base/models/rtb/AdPrivacy;->privacy_template_info:Ljava/util/Map;

    return-void
.end method


# virtual methods
.method public equals(Ljava/lang/Object;)Z
    .locals 4

    const/4 v0, 0x1

    if-ne p1, p0, :cond_0

    return v0

    :cond_0
    instance-of v1, p1, Lcom/sigmob/sdk/base/models/rtb/AdPrivacy;

    const/4 v2, 0x0

    if-nez v1, :cond_1

    return v2

    :cond_1
    check-cast p1, Lcom/sigmob/sdk/base/models/rtb/AdPrivacy;

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/models/rtb/AdPrivacy;->unknownFields()Lcom/czhj/wire/okio/ByteString;

    move-result-object v1

    invoke-virtual {p1}, Lcom/sigmob/sdk/base/models/rtb/AdPrivacy;->unknownFields()Lcom/czhj/wire/okio/ByteString;

    move-result-object v3

    invoke-virtual {v1, v3}, Lcom/czhj/wire/okio/ByteString;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/AdPrivacy;->privacy_info_url:Ljava/lang/String;

    iget-object v3, p1, Lcom/sigmob/sdk/base/models/rtb/AdPrivacy;->privacy_info_url:Ljava/lang/String;

    invoke-static {v1, v3}, Lcom/czhj/wire/internal/Internal;->equals(Ljava/lang/Object;Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/AdPrivacy;->privacy_template_url:Ljava/lang/String;

    iget-object v3, p1, Lcom/sigmob/sdk/base/models/rtb/AdPrivacy;->privacy_template_url:Ljava/lang/String;

    invoke-static {v1, v3}, Lcom/czhj/wire/internal/Internal;->equals(Ljava/lang/Object;Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/AdPrivacy;->privacy_template_info:Ljava/util/Map;

    iget-object p1, p1, Lcom/sigmob/sdk/base/models/rtb/AdPrivacy;->privacy_template_info:Ljava/util/Map;

    invoke-interface {v1, p1}, Ljava/util/Map;->equals(Ljava/lang/Object;)Z

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

    if-nez v0, :cond_2

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/models/rtb/AdPrivacy;->unknownFields()Lcom/czhj/wire/okio/ByteString;

    move-result-object v0

    invoke-virtual {v0}, Lcom/czhj/wire/okio/ByteString;->hashCode()I

    move-result v0

    mul-int/lit8 v0, v0, 0x25

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/AdPrivacy;->privacy_info_url:Ljava/lang/String;

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

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/AdPrivacy;->privacy_template_url:Ljava/lang/String;

    if-eqz v1, :cond_1

    invoke-virtual {v1}, Ljava/lang/String;->hashCode()I

    move-result v2

    :cond_1
    add-int/2addr v0, v2

    mul-int/lit8 v0, v0, 0x25

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/AdPrivacy;->privacy_template_info:Ljava/util/Map;

    invoke-interface {v1}, Ljava/util/Map;->hashCode()I

    move-result v1

    add-int/2addr v0, v1

    iput v0, p0, Lcom/czhj/wire/AndroidMessage;->hashCode:I

    :cond_2
    return v0
.end method

.method public bridge synthetic newBuilder()Lcom/czhj/wire/Message$Builder;
    .locals 1

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/models/rtb/AdPrivacy;->newBuilder()Lcom/sigmob/sdk/base/models/rtb/AdPrivacy$Builder;

    move-result-object v0

    return-object v0
.end method

.method public newBuilder()Lcom/sigmob/sdk/base/models/rtb/AdPrivacy$Builder;
    .locals 3

    new-instance v0, Lcom/sigmob/sdk/base/models/rtb/AdPrivacy$Builder;

    invoke-direct {v0}, Lcom/sigmob/sdk/base/models/rtb/AdPrivacy$Builder;-><init>()V

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/AdPrivacy;->privacy_info_url:Ljava/lang/String;

    iput-object v1, v0, Lcom/sigmob/sdk/base/models/rtb/AdPrivacy$Builder;->privacy_info_url:Ljava/lang/String;

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/AdPrivacy;->privacy_template_url:Ljava/lang/String;

    iput-object v1, v0, Lcom/sigmob/sdk/base/models/rtb/AdPrivacy$Builder;->privacy_template_url:Ljava/lang/String;

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/AdPrivacy;->privacy_template_info:Ljava/util/Map;

    const-string v2, "privacy_template_info"

    invoke-static {v2, v1}, Lcom/czhj/wire/internal/Internal;->copyOf(Ljava/lang/String;Ljava/util/Map;)Ljava/util/Map;

    move-result-object v1

    iput-object v1, v0, Lcom/sigmob/sdk/base/models/rtb/AdPrivacy$Builder;->privacy_template_info:Ljava/util/Map;

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/models/rtb/AdPrivacy;->unknownFields()Lcom/czhj/wire/okio/ByteString;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/sigmob/sdk/base/models/rtb/AdPrivacy$Builder;->addUnknownFields(Lcom/czhj/wire/okio/ByteString;)Lcom/czhj/wire/Message$Builder;

    return-object v0
.end method

.method public toString()Ljava/lang/String;
    .locals 4

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/AdPrivacy;->privacy_info_url:Ljava/lang/String;

    if-eqz v1, :cond_0

    const-string v1, ", privacy_info_url="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/AdPrivacy;->privacy_info_url:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    :cond_0
    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/AdPrivacy;->privacy_template_url:Ljava/lang/String;

    if-eqz v1, :cond_1

    const-string v1, ", privacy_template_url="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/AdPrivacy;->privacy_template_url:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    :cond_1
    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/AdPrivacy;->privacy_template_info:Ljava/util/Map;

    invoke-interface {v1}, Ljava/util/Map;->isEmpty()Z

    move-result v1

    if-nez v1, :cond_2

    const-string v1, ", privacy_template_info="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/AdPrivacy;->privacy_template_info:Ljava/util/Map;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    :cond_2
    const/4 v1, 0x0

    const/4 v2, 0x2

    const-string v3, "AdPrivacy{"

    invoke-virtual {v0, v1, v2, v3}, Ljava/lang/StringBuilder;->replace(IILjava/lang/String;)Ljava/lang/StringBuilder;

    move-result-object v0

    const/16 v1, 0x7d

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(C)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method
