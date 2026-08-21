.class public final Lcom/sigmob/sdk/base/models/config/RvConfig;
.super Lcom/czhj/wire/AndroidMessage;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/sigmob/sdk/base/models/config/RvConfig$ProtoAdapter_RvConfig;,
        Lcom/sigmob/sdk/base/models/config/RvConfig$Builder;
    }
.end annotation

.annotation system Ldalvik/annotation/Signature;
    value = {
        "Lcom/czhj/wire/AndroidMessage<",
        "Lcom/sigmob/sdk/base/models/config/RvConfig;",
        "Lcom/sigmob/sdk/base/models/config/RvConfig$Builder;",
        ">;"
    }
.end annotation


# static fields
.field public static final ADAPTER:Lcom/czhj/wire/ProtoAdapter;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Lcom/czhj/wire/ProtoAdapter<",
            "Lcom/sigmob/sdk/base/models/config/RvConfig;",
            ">;"
        }
    .end annotation
.end field

.field public static final CREATOR:Landroid/os/Parcelable$Creator;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Landroid/os/Parcelable$Creator<",
            "Lcom/sigmob/sdk/base/models/config/RvConfig;",
            ">;"
        }
    .end annotation
.end field

.field public static final DEFAULT_AD_LOAD_TIMEOUT:Ljava/lang/Integer;

.field public static final DEFAULT_CACHETOP:Ljava/lang/Integer;

.field private static final serialVersionUID:J


# instance fields
.field public final ad_load_timeout:Ljava/lang/Integer;
    .annotation runtime Lcom/czhj/wire/WireField;
        adapter = "com.squareup.wire.ProtoAdapter#UINT32"
        tag = 0x2
    .end annotation
.end field

.field public final cacheTop:Ljava/lang/Integer;
    .annotation runtime Lcom/czhj/wire/WireField;
        adapter = "com.squareup.wire.ProtoAdapter#UINT32"
        tag = 0x1
    .end annotation
.end field

.field public final close_dialog_setting:Lcom/sigmob/sdk/base/models/config/DialogSetting;
    .annotation runtime Lcom/czhj/wire/WireField;
        adapter = "com.sigmob.sdk.base.models.DialogSetting#ADAPTER"
        tag = 0x3
    .end annotation
.end field


# direct methods
.method static constructor <clinit>()V
    .locals 1

    new-instance v0, Lcom/sigmob/sdk/base/models/config/RvConfig$ProtoAdapter_RvConfig;

    invoke-direct {v0}, Lcom/sigmob/sdk/base/models/config/RvConfig$ProtoAdapter_RvConfig;-><init>()V

    sput-object v0, Lcom/sigmob/sdk/base/models/config/RvConfig;->ADAPTER:Lcom/czhj/wire/ProtoAdapter;

    invoke-static {v0}, Lcom/czhj/wire/AndroidMessage;->newCreator(Lcom/czhj/wire/ProtoAdapter;)Landroid/os/Parcelable$Creator;

    move-result-object v0

    sput-object v0, Lcom/sigmob/sdk/base/models/config/RvConfig;->CREATOR:Landroid/os/Parcelable$Creator;

    const/4 v0, 0x5

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    sput-object v0, Lcom/sigmob/sdk/base/models/config/RvConfig;->DEFAULT_CACHETOP:Ljava/lang/Integer;

    const/16 v0, 0x2d

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    sput-object v0, Lcom/sigmob/sdk/base/models/config/RvConfig;->DEFAULT_AD_LOAD_TIMEOUT:Ljava/lang/Integer;

    return-void
.end method

.method public constructor <init>(Ljava/lang/Integer;Ljava/lang/Integer;Lcom/sigmob/sdk/base/models/config/DialogSetting;)V
    .locals 1

    sget-object v0, Lcom/czhj/wire/okio/ByteString;->EMPTY:Lcom/czhj/wire/okio/ByteString;

    invoke-direct {p0, p1, p2, p3, v0}, Lcom/sigmob/sdk/base/models/config/RvConfig;-><init>(Ljava/lang/Integer;Ljava/lang/Integer;Lcom/sigmob/sdk/base/models/config/DialogSetting;Lcom/czhj/wire/okio/ByteString;)V

    return-void
.end method

.method public constructor <init>(Ljava/lang/Integer;Ljava/lang/Integer;Lcom/sigmob/sdk/base/models/config/DialogSetting;Lcom/czhj/wire/okio/ByteString;)V
    .locals 1

    sget-object v0, Lcom/sigmob/sdk/base/models/config/RvConfig;->ADAPTER:Lcom/czhj/wire/ProtoAdapter;

    invoke-direct {p0, v0, p4}, Lcom/czhj/wire/AndroidMessage;-><init>(Lcom/czhj/wire/ProtoAdapter;Lcom/czhj/wire/okio/ByteString;)V

    iput-object p1, p0, Lcom/sigmob/sdk/base/models/config/RvConfig;->cacheTop:Ljava/lang/Integer;

    iput-object p2, p0, Lcom/sigmob/sdk/base/models/config/RvConfig;->ad_load_timeout:Ljava/lang/Integer;

    iput-object p3, p0, Lcom/sigmob/sdk/base/models/config/RvConfig;->close_dialog_setting:Lcom/sigmob/sdk/base/models/config/DialogSetting;

    return-void
.end method


# virtual methods
.method public equals(Ljava/lang/Object;)Z
    .locals 4

    const/4 v0, 0x1

    if-ne p1, p0, :cond_0

    return v0

    :cond_0
    instance-of v1, p1, Lcom/sigmob/sdk/base/models/config/RvConfig;

    const/4 v2, 0x0

    if-nez v1, :cond_1

    return v2

    :cond_1
    check-cast p1, Lcom/sigmob/sdk/base/models/config/RvConfig;

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/models/config/RvConfig;->unknownFields()Lcom/czhj/wire/okio/ByteString;

    move-result-object v1

    invoke-virtual {p1}, Lcom/sigmob/sdk/base/models/config/RvConfig;->unknownFields()Lcom/czhj/wire/okio/ByteString;

    move-result-object v3

    invoke-virtual {v1, v3}, Lcom/czhj/wire/okio/ByteString;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/config/RvConfig;->cacheTop:Ljava/lang/Integer;

    iget-object v3, p1, Lcom/sigmob/sdk/base/models/config/RvConfig;->cacheTop:Ljava/lang/Integer;

    invoke-static {v1, v3}, Lcom/czhj/wire/internal/Internal;->equals(Ljava/lang/Object;Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/config/RvConfig;->ad_load_timeout:Ljava/lang/Integer;

    iget-object v3, p1, Lcom/sigmob/sdk/base/models/config/RvConfig;->ad_load_timeout:Ljava/lang/Integer;

    invoke-static {v1, v3}, Lcom/czhj/wire/internal/Internal;->equals(Ljava/lang/Object;Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/config/RvConfig;->close_dialog_setting:Lcom/sigmob/sdk/base/models/config/DialogSetting;

    iget-object p1, p1, Lcom/sigmob/sdk/base/models/config/RvConfig;->close_dialog_setting:Lcom/sigmob/sdk/base/models/config/DialogSetting;

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

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/models/config/RvConfig;->unknownFields()Lcom/czhj/wire/okio/ByteString;

    move-result-object v0

    invoke-virtual {v0}, Lcom/czhj/wire/okio/ByteString;->hashCode()I

    move-result v0

    mul-int/lit8 v0, v0, 0x25

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/config/RvConfig;->cacheTop:Ljava/lang/Integer;

    const/4 v2, 0x0

    if-eqz v1, :cond_0

    invoke-virtual {v1}, Ljava/lang/Integer;->hashCode()I

    move-result v1

    goto :goto_0

    :cond_0
    move v1, v2

    :goto_0
    add-int/2addr v0, v1

    mul-int/lit8 v0, v0, 0x25

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/config/RvConfig;->ad_load_timeout:Ljava/lang/Integer;

    if-eqz v1, :cond_1

    invoke-virtual {v1}, Ljava/lang/Integer;->hashCode()I

    move-result v1

    goto :goto_1

    :cond_1
    move v1, v2

    :goto_1
    add-int/2addr v0, v1

    mul-int/lit8 v0, v0, 0x25

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/config/RvConfig;->close_dialog_setting:Lcom/sigmob/sdk/base/models/config/DialogSetting;

    if-eqz v1, :cond_2

    invoke-virtual {v1}, Lcom/sigmob/sdk/base/models/config/DialogSetting;->hashCode()I

    move-result v2

    :cond_2
    add-int/2addr v0, v2

    iput v0, p0, Lcom/czhj/wire/AndroidMessage;->hashCode:I

    :cond_3
    return v0
.end method

.method public bridge synthetic newBuilder()Lcom/czhj/wire/Message$Builder;
    .locals 1

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/models/config/RvConfig;->newBuilder()Lcom/sigmob/sdk/base/models/config/RvConfig$Builder;

    move-result-object v0

    return-object v0
.end method

.method public newBuilder()Lcom/sigmob/sdk/base/models/config/RvConfig$Builder;
    .locals 2

    new-instance v0, Lcom/sigmob/sdk/base/models/config/RvConfig$Builder;

    invoke-direct {v0}, Lcom/sigmob/sdk/base/models/config/RvConfig$Builder;-><init>()V

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/config/RvConfig;->cacheTop:Ljava/lang/Integer;

    iput-object v1, v0, Lcom/sigmob/sdk/base/models/config/RvConfig$Builder;->cacheTop:Ljava/lang/Integer;

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/config/RvConfig;->ad_load_timeout:Ljava/lang/Integer;

    iput-object v1, v0, Lcom/sigmob/sdk/base/models/config/RvConfig$Builder;->ad_load_timeout:Ljava/lang/Integer;

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/config/RvConfig;->close_dialog_setting:Lcom/sigmob/sdk/base/models/config/DialogSetting;

    iput-object v1, v0, Lcom/sigmob/sdk/base/models/config/RvConfig$Builder;->close_dialog_setting:Lcom/sigmob/sdk/base/models/config/DialogSetting;

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/models/config/RvConfig;->unknownFields()Lcom/czhj/wire/okio/ByteString;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/sigmob/sdk/base/models/config/RvConfig$Builder;->addUnknownFields(Lcom/czhj/wire/okio/ByteString;)Lcom/czhj/wire/Message$Builder;

    return-object v0
.end method

.method public toString()Ljava/lang/String;
    .locals 4

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/config/RvConfig;->cacheTop:Ljava/lang/Integer;

    if-eqz v1, :cond_0

    const-string v1, ", cacheTop="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/config/RvConfig;->cacheTop:Ljava/lang/Integer;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    :cond_0
    iget-object v1, p0, Lcom/sigmob/sdk/base/models/config/RvConfig;->ad_load_timeout:Ljava/lang/Integer;

    if-eqz v1, :cond_1

    const-string v1, ", ad_load_timeout="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/config/RvConfig;->ad_load_timeout:Ljava/lang/Integer;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    :cond_1
    iget-object v1, p0, Lcom/sigmob/sdk/base/models/config/RvConfig;->close_dialog_setting:Lcom/sigmob/sdk/base/models/config/DialogSetting;

    if-eqz v1, :cond_2

    const-string v1, ", close_dialog_setting="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/config/RvConfig;->close_dialog_setting:Lcom/sigmob/sdk/base/models/config/DialogSetting;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    :cond_2
    const/4 v1, 0x0

    const/4 v2, 0x2

    const-string v3, "RvConfig{"

    invoke-virtual {v0, v1, v2, v3}, Ljava/lang/StringBuilder;->replace(IILjava/lang/String;)Ljava/lang/StringBuilder;

    move-result-object v0

    const/16 v1, 0x7d

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(C)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method
