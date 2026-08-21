.class public final Lcom/sigmob/sdk/base/models/rtb/BiddingResponse;
.super Lcom/czhj/wire/AndroidMessage;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/sigmob/sdk/base/models/rtb/BiddingResponse$ProtoAdapter_BiddingResponse;,
        Lcom/sigmob/sdk/base/models/rtb/BiddingResponse$Builder;
    }
.end annotation

.annotation system Ldalvik/annotation/Signature;
    value = {
        "Lcom/czhj/wire/AndroidMessage<",
        "Lcom/sigmob/sdk/base/models/rtb/BiddingResponse;",
        "Lcom/sigmob/sdk/base/models/rtb/BiddingResponse$Builder;",
        ">;"
    }
.end annotation


# static fields
.field public static final ADAPTER:Lcom/czhj/wire/ProtoAdapter;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Lcom/czhj/wire/ProtoAdapter<",
            "Lcom/sigmob/sdk/base/models/rtb/BiddingResponse;",
            ">;"
        }
    .end annotation
.end field

.field public static final CREATOR:Landroid/os/Parcelable$Creator;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Landroid/os/Parcelable$Creator<",
            "Lcom/sigmob/sdk/base/models/rtb/BiddingResponse;",
            ">;"
        }
    .end annotation
.end field

.field public static final DEFAULT_ECPM:Ljava/lang/Integer;

.field public static final DEFAULT_LOSE_URL:Ljava/lang/String; = ""

.field public static final DEFAULT_WIN_URL:Ljava/lang/String; = ""

.field private static final serialVersionUID:J


# instance fields
.field public final ecpm:Ljava/lang/Integer;
    .annotation runtime Lcom/czhj/wire/WireField;
        adapter = "com.squareup.wire.ProtoAdapter#UINT32"
        tag = 0x3
    .end annotation
.end field

.field public final lose_url:Ljava/lang/String;
    .annotation runtime Lcom/czhj/wire/WireField;
        adapter = "com.squareup.wire.ProtoAdapter#STRING"
        tag = 0x2
    .end annotation
.end field

.field public final win_url:Ljava/lang/String;
    .annotation runtime Lcom/czhj/wire/WireField;
        adapter = "com.squareup.wire.ProtoAdapter#STRING"
        tag = 0x1
    .end annotation
.end field


# direct methods
.method static constructor <clinit>()V
    .locals 1

    new-instance v0, Lcom/sigmob/sdk/base/models/rtb/BiddingResponse$ProtoAdapter_BiddingResponse;

    invoke-direct {v0}, Lcom/sigmob/sdk/base/models/rtb/BiddingResponse$ProtoAdapter_BiddingResponse;-><init>()V

    sput-object v0, Lcom/sigmob/sdk/base/models/rtb/BiddingResponse;->ADAPTER:Lcom/czhj/wire/ProtoAdapter;

    invoke-static {v0}, Lcom/czhj/wire/AndroidMessage;->newCreator(Lcom/czhj/wire/ProtoAdapter;)Landroid/os/Parcelable$Creator;

    move-result-object v0

    sput-object v0, Lcom/sigmob/sdk/base/models/rtb/BiddingResponse;->CREATOR:Landroid/os/Parcelable$Creator;

    const/4 v0, 0x0

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    sput-object v0, Lcom/sigmob/sdk/base/models/rtb/BiddingResponse;->DEFAULT_ECPM:Ljava/lang/Integer;

    return-void
.end method

.method public constructor <init>(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Integer;)V
    .locals 1

    sget-object v0, Lcom/czhj/wire/okio/ByteString;->EMPTY:Lcom/czhj/wire/okio/ByteString;

    invoke-direct {p0, p1, p2, p3, v0}, Lcom/sigmob/sdk/base/models/rtb/BiddingResponse;-><init>(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Integer;Lcom/czhj/wire/okio/ByteString;)V

    return-void
.end method

.method public constructor <init>(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Integer;Lcom/czhj/wire/okio/ByteString;)V
    .locals 1

    sget-object v0, Lcom/sigmob/sdk/base/models/rtb/BiddingResponse;->ADAPTER:Lcom/czhj/wire/ProtoAdapter;

    invoke-direct {p0, v0, p4}, Lcom/czhj/wire/AndroidMessage;-><init>(Lcom/czhj/wire/ProtoAdapter;Lcom/czhj/wire/okio/ByteString;)V

    iput-object p1, p0, Lcom/sigmob/sdk/base/models/rtb/BiddingResponse;->win_url:Ljava/lang/String;

    iput-object p2, p0, Lcom/sigmob/sdk/base/models/rtb/BiddingResponse;->lose_url:Ljava/lang/String;

    iput-object p3, p0, Lcom/sigmob/sdk/base/models/rtb/BiddingResponse;->ecpm:Ljava/lang/Integer;

    return-void
.end method


# virtual methods
.method public equals(Ljava/lang/Object;)Z
    .locals 4

    const/4 v0, 0x1

    if-ne p1, p0, :cond_0

    return v0

    :cond_0
    instance-of v1, p1, Lcom/sigmob/sdk/base/models/rtb/BiddingResponse;

    const/4 v2, 0x0

    if-nez v1, :cond_1

    return v2

    :cond_1
    check-cast p1, Lcom/sigmob/sdk/base/models/rtb/BiddingResponse;

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/models/rtb/BiddingResponse;->unknownFields()Lcom/czhj/wire/okio/ByteString;

    move-result-object v1

    invoke-virtual {p1}, Lcom/sigmob/sdk/base/models/rtb/BiddingResponse;->unknownFields()Lcom/czhj/wire/okio/ByteString;

    move-result-object v3

    invoke-virtual {v1, v3}, Lcom/czhj/wire/okio/ByteString;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/BiddingResponse;->win_url:Ljava/lang/String;

    iget-object v3, p1, Lcom/sigmob/sdk/base/models/rtb/BiddingResponse;->win_url:Ljava/lang/String;

    invoke-static {v1, v3}, Lcom/czhj/wire/internal/Internal;->equals(Ljava/lang/Object;Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/BiddingResponse;->lose_url:Ljava/lang/String;

    iget-object v3, p1, Lcom/sigmob/sdk/base/models/rtb/BiddingResponse;->lose_url:Ljava/lang/String;

    invoke-static {v1, v3}, Lcom/czhj/wire/internal/Internal;->equals(Ljava/lang/Object;Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/BiddingResponse;->ecpm:Ljava/lang/Integer;

    iget-object p1, p1, Lcom/sigmob/sdk/base/models/rtb/BiddingResponse;->ecpm:Ljava/lang/Integer;

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

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/models/rtb/BiddingResponse;->unknownFields()Lcom/czhj/wire/okio/ByteString;

    move-result-object v0

    invoke-virtual {v0}, Lcom/czhj/wire/okio/ByteString;->hashCode()I

    move-result v0

    mul-int/lit8 v0, v0, 0x25

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/BiddingResponse;->win_url:Ljava/lang/String;

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

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/BiddingResponse;->lose_url:Ljava/lang/String;

    if-eqz v1, :cond_1

    invoke-virtual {v1}, Ljava/lang/String;->hashCode()I

    move-result v1

    goto :goto_1

    :cond_1
    move v1, v2

    :goto_1
    add-int/2addr v0, v1

    mul-int/lit8 v0, v0, 0x25

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/BiddingResponse;->ecpm:Ljava/lang/Integer;

    if-eqz v1, :cond_2

    invoke-virtual {v1}, Ljava/lang/Integer;->hashCode()I

    move-result v2

    :cond_2
    add-int/2addr v0, v2

    iput v0, p0, Lcom/czhj/wire/AndroidMessage;->hashCode:I

    :cond_3
    return v0
.end method

.method public bridge synthetic newBuilder()Lcom/czhj/wire/Message$Builder;
    .locals 1

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/models/rtb/BiddingResponse;->newBuilder()Lcom/sigmob/sdk/base/models/rtb/BiddingResponse$Builder;

    move-result-object v0

    return-object v0
.end method

.method public newBuilder()Lcom/sigmob/sdk/base/models/rtb/BiddingResponse$Builder;
    .locals 2

    new-instance v0, Lcom/sigmob/sdk/base/models/rtb/BiddingResponse$Builder;

    invoke-direct {v0}, Lcom/sigmob/sdk/base/models/rtb/BiddingResponse$Builder;-><init>()V

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/BiddingResponse;->win_url:Ljava/lang/String;

    iput-object v1, v0, Lcom/sigmob/sdk/base/models/rtb/BiddingResponse$Builder;->win_url:Ljava/lang/String;

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/BiddingResponse;->lose_url:Ljava/lang/String;

    iput-object v1, v0, Lcom/sigmob/sdk/base/models/rtb/BiddingResponse$Builder;->lose_url:Ljava/lang/String;

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/BiddingResponse;->ecpm:Ljava/lang/Integer;

    iput-object v1, v0, Lcom/sigmob/sdk/base/models/rtb/BiddingResponse$Builder;->ecpm:Ljava/lang/Integer;

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/models/rtb/BiddingResponse;->unknownFields()Lcom/czhj/wire/okio/ByteString;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/sigmob/sdk/base/models/rtb/BiddingResponse$Builder;->addUnknownFields(Lcom/czhj/wire/okio/ByteString;)Lcom/czhj/wire/Message$Builder;

    return-object v0
.end method

.method public toString()Ljava/lang/String;
    .locals 4

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/BiddingResponse;->win_url:Ljava/lang/String;

    if-eqz v1, :cond_0

    const-string v1, ", win_url="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/BiddingResponse;->win_url:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    :cond_0
    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/BiddingResponse;->lose_url:Ljava/lang/String;

    if-eqz v1, :cond_1

    const-string v1, ", lose_url="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/BiddingResponse;->lose_url:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    :cond_1
    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/BiddingResponse;->ecpm:Ljava/lang/Integer;

    if-eqz v1, :cond_2

    const-string v1, ", ecpm="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/BiddingResponse;->ecpm:Ljava/lang/Integer;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    :cond_2
    const/4 v1, 0x0

    const/4 v2, 0x2

    const-string v3, "BiddingResponse{"

    invoke-virtual {v0, v1, v2, v3}, Ljava/lang/StringBuilder;->replace(IILjava/lang/String;)Ljava/lang/StringBuilder;

    move-result-object v0

    const/16 v1, 0x7d

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(C)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method
