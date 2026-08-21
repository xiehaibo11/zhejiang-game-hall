.class public final Lcom/sigmob/sdk/base/models/rtb/ClickAreaSetting;
.super Lcom/czhj/wire/AndroidMessage;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/sigmob/sdk/base/models/rtb/ClickAreaSetting$ProtoAdapter_ClickAreaSetting;,
        Lcom/sigmob/sdk/base/models/rtb/ClickAreaSetting$Builder;
    }
.end annotation

.annotation system Ldalvik/annotation/Signature;
    value = {
        "Lcom/czhj/wire/AndroidMessage<",
        "Lcom/sigmob/sdk/base/models/rtb/ClickAreaSetting;",
        "Lcom/sigmob/sdk/base/models/rtb/ClickAreaSetting$Builder;",
        ">;"
    }
.end annotation


# static fields
.field public static final ADAPTER:Lcom/czhj/wire/ProtoAdapter;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Lcom/czhj/wire/ProtoAdapter<",
            "Lcom/sigmob/sdk/base/models/rtb/ClickAreaSetting;",
            ">;"
        }
    .end annotation
.end field

.field public static final CREATOR:Landroid/os/Parcelable$Creator;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Landroid/os/Parcelable$Creator<",
            "Lcom/sigmob/sdk/base/models/rtb/ClickAreaSetting;",
            ">;"
        }
    .end annotation
.end field

.field public static final DEFAULT_BOTTOM:Ljava/lang/Float;

.field public static final DEFAULT_LEFT:Ljava/lang/Float;

.field public static final DEFAULT_RIGHT:Ljava/lang/Float;

.field public static final DEFAULT_TOP:Ljava/lang/Float;

.field private static final serialVersionUID:J


# instance fields
.field public final bottom:Ljava/lang/Float;
    .annotation runtime Lcom/czhj/wire/WireField;
        adapter = "com.squareup.wire.ProtoAdapter#FLOAT"
        tag = 0x3
    .end annotation
.end field

.field public final left:Ljava/lang/Float;
    .annotation runtime Lcom/czhj/wire/WireField;
        adapter = "com.squareup.wire.ProtoAdapter#FLOAT"
        tag = 0x2
    .end annotation
.end field

.field public final right:Ljava/lang/Float;
    .annotation runtime Lcom/czhj/wire/WireField;
        adapter = "com.squareup.wire.ProtoAdapter#FLOAT"
        tag = 0x4
    .end annotation
.end field

.field public final top:Ljava/lang/Float;
    .annotation runtime Lcom/czhj/wire/WireField;
        adapter = "com.squareup.wire.ProtoAdapter#FLOAT"
        tag = 0x1
    .end annotation
.end field


# direct methods
.method static constructor <clinit>()V
    .locals 1

    new-instance v0, Lcom/sigmob/sdk/base/models/rtb/ClickAreaSetting$ProtoAdapter_ClickAreaSetting;

    invoke-direct {v0}, Lcom/sigmob/sdk/base/models/rtb/ClickAreaSetting$ProtoAdapter_ClickAreaSetting;-><init>()V

    sput-object v0, Lcom/sigmob/sdk/base/models/rtb/ClickAreaSetting;->ADAPTER:Lcom/czhj/wire/ProtoAdapter;

    invoke-static {v0}, Lcom/czhj/wire/AndroidMessage;->newCreator(Lcom/czhj/wire/ProtoAdapter;)Landroid/os/Parcelable$Creator;

    move-result-object v0

    sput-object v0, Lcom/sigmob/sdk/base/models/rtb/ClickAreaSetting;->CREATOR:Landroid/os/Parcelable$Creator;

    const/4 v0, 0x0

    invoke-static {v0}, Ljava/lang/Float;->valueOf(F)Ljava/lang/Float;

    move-result-object v0

    sput-object v0, Lcom/sigmob/sdk/base/models/rtb/ClickAreaSetting;->DEFAULT_TOP:Ljava/lang/Float;

    sput-object v0, Lcom/sigmob/sdk/base/models/rtb/ClickAreaSetting;->DEFAULT_LEFT:Ljava/lang/Float;

    sput-object v0, Lcom/sigmob/sdk/base/models/rtb/ClickAreaSetting;->DEFAULT_BOTTOM:Ljava/lang/Float;

    sput-object v0, Lcom/sigmob/sdk/base/models/rtb/ClickAreaSetting;->DEFAULT_RIGHT:Ljava/lang/Float;

    return-void
.end method

.method public constructor <init>(Ljava/lang/Float;Ljava/lang/Float;Ljava/lang/Float;Ljava/lang/Float;)V
    .locals 6

    sget-object v5, Lcom/czhj/wire/okio/ByteString;->EMPTY:Lcom/czhj/wire/okio/ByteString;

    move-object v0, p0

    move-object v1, p1

    move-object v2, p2

    move-object v3, p3

    move-object v4, p4

    invoke-direct/range {v0 .. v5}, Lcom/sigmob/sdk/base/models/rtb/ClickAreaSetting;-><init>(Ljava/lang/Float;Ljava/lang/Float;Ljava/lang/Float;Ljava/lang/Float;Lcom/czhj/wire/okio/ByteString;)V

    return-void
.end method

.method public constructor <init>(Ljava/lang/Float;Ljava/lang/Float;Ljava/lang/Float;Ljava/lang/Float;Lcom/czhj/wire/okio/ByteString;)V
    .locals 1

    sget-object v0, Lcom/sigmob/sdk/base/models/rtb/ClickAreaSetting;->ADAPTER:Lcom/czhj/wire/ProtoAdapter;

    invoke-direct {p0, v0, p5}, Lcom/czhj/wire/AndroidMessage;-><init>(Lcom/czhj/wire/ProtoAdapter;Lcom/czhj/wire/okio/ByteString;)V

    iput-object p1, p0, Lcom/sigmob/sdk/base/models/rtb/ClickAreaSetting;->top:Ljava/lang/Float;

    iput-object p2, p0, Lcom/sigmob/sdk/base/models/rtb/ClickAreaSetting;->left:Ljava/lang/Float;

    iput-object p3, p0, Lcom/sigmob/sdk/base/models/rtb/ClickAreaSetting;->bottom:Ljava/lang/Float;

    iput-object p4, p0, Lcom/sigmob/sdk/base/models/rtb/ClickAreaSetting;->right:Ljava/lang/Float;

    return-void
.end method


# virtual methods
.method public equals(Ljava/lang/Object;)Z
    .locals 4

    const/4 v0, 0x1

    if-ne p1, p0, :cond_0

    return v0

    :cond_0
    instance-of v1, p1, Lcom/sigmob/sdk/base/models/rtb/ClickAreaSetting;

    const/4 v2, 0x0

    if-nez v1, :cond_1

    return v2

    :cond_1
    check-cast p1, Lcom/sigmob/sdk/base/models/rtb/ClickAreaSetting;

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/models/rtb/ClickAreaSetting;->unknownFields()Lcom/czhj/wire/okio/ByteString;

    move-result-object v1

    invoke-virtual {p1}, Lcom/sigmob/sdk/base/models/rtb/ClickAreaSetting;->unknownFields()Lcom/czhj/wire/okio/ByteString;

    move-result-object v3

    invoke-virtual {v1, v3}, Lcom/czhj/wire/okio/ByteString;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/ClickAreaSetting;->top:Ljava/lang/Float;

    iget-object v3, p1, Lcom/sigmob/sdk/base/models/rtb/ClickAreaSetting;->top:Ljava/lang/Float;

    invoke-static {v1, v3}, Lcom/czhj/wire/internal/Internal;->equals(Ljava/lang/Object;Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/ClickAreaSetting;->left:Ljava/lang/Float;

    iget-object v3, p1, Lcom/sigmob/sdk/base/models/rtb/ClickAreaSetting;->left:Ljava/lang/Float;

    invoke-static {v1, v3}, Lcom/czhj/wire/internal/Internal;->equals(Ljava/lang/Object;Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/ClickAreaSetting;->bottom:Ljava/lang/Float;

    iget-object v3, p1, Lcom/sigmob/sdk/base/models/rtb/ClickAreaSetting;->bottom:Ljava/lang/Float;

    invoke-static {v1, v3}, Lcom/czhj/wire/internal/Internal;->equals(Ljava/lang/Object;Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/ClickAreaSetting;->right:Ljava/lang/Float;

    iget-object p1, p1, Lcom/sigmob/sdk/base/models/rtb/ClickAreaSetting;->right:Ljava/lang/Float;

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

    if-nez v0, :cond_4

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/models/rtb/ClickAreaSetting;->unknownFields()Lcom/czhj/wire/okio/ByteString;

    move-result-object v0

    invoke-virtual {v0}, Lcom/czhj/wire/okio/ByteString;->hashCode()I

    move-result v0

    mul-int/lit8 v0, v0, 0x25

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/ClickAreaSetting;->top:Ljava/lang/Float;

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

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/ClickAreaSetting;->left:Ljava/lang/Float;

    if-eqz v1, :cond_1

    invoke-virtual {v1}, Ljava/lang/Float;->hashCode()I

    move-result v1

    goto :goto_1

    :cond_1
    move v1, v2

    :goto_1
    add-int/2addr v0, v1

    mul-int/lit8 v0, v0, 0x25

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/ClickAreaSetting;->bottom:Ljava/lang/Float;

    if-eqz v1, :cond_2

    invoke-virtual {v1}, Ljava/lang/Float;->hashCode()I

    move-result v1

    goto :goto_2

    :cond_2
    move v1, v2

    :goto_2
    add-int/2addr v0, v1

    mul-int/lit8 v0, v0, 0x25

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/ClickAreaSetting;->right:Ljava/lang/Float;

    if-eqz v1, :cond_3

    invoke-virtual {v1}, Ljava/lang/Float;->hashCode()I

    move-result v2

    :cond_3
    add-int/2addr v0, v2

    iput v0, p0, Lcom/czhj/wire/AndroidMessage;->hashCode:I

    :cond_4
    return v0
.end method

.method public bridge synthetic newBuilder()Lcom/czhj/wire/Message$Builder;
    .locals 1

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/models/rtb/ClickAreaSetting;->newBuilder()Lcom/sigmob/sdk/base/models/rtb/ClickAreaSetting$Builder;

    move-result-object v0

    return-object v0
.end method

.method public newBuilder()Lcom/sigmob/sdk/base/models/rtb/ClickAreaSetting$Builder;
    .locals 2

    new-instance v0, Lcom/sigmob/sdk/base/models/rtb/ClickAreaSetting$Builder;

    invoke-direct {v0}, Lcom/sigmob/sdk/base/models/rtb/ClickAreaSetting$Builder;-><init>()V

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/ClickAreaSetting;->top:Ljava/lang/Float;

    iput-object v1, v0, Lcom/sigmob/sdk/base/models/rtb/ClickAreaSetting$Builder;->top:Ljava/lang/Float;

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/ClickAreaSetting;->left:Ljava/lang/Float;

    iput-object v1, v0, Lcom/sigmob/sdk/base/models/rtb/ClickAreaSetting$Builder;->left:Ljava/lang/Float;

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/ClickAreaSetting;->bottom:Ljava/lang/Float;

    iput-object v1, v0, Lcom/sigmob/sdk/base/models/rtb/ClickAreaSetting$Builder;->bottom:Ljava/lang/Float;

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/ClickAreaSetting;->right:Ljava/lang/Float;

    iput-object v1, v0, Lcom/sigmob/sdk/base/models/rtb/ClickAreaSetting$Builder;->right:Ljava/lang/Float;

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/models/rtb/ClickAreaSetting;->unknownFields()Lcom/czhj/wire/okio/ByteString;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/sigmob/sdk/base/models/rtb/ClickAreaSetting$Builder;->addUnknownFields(Lcom/czhj/wire/okio/ByteString;)Lcom/czhj/wire/Message$Builder;

    return-object v0
.end method

.method public toString()Ljava/lang/String;
    .locals 4

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/ClickAreaSetting;->top:Ljava/lang/Float;

    if-eqz v1, :cond_0

    const-string v1, ", top="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/ClickAreaSetting;->top:Ljava/lang/Float;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    :cond_0
    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/ClickAreaSetting;->left:Ljava/lang/Float;

    if-eqz v1, :cond_1

    const-string v1, ", left="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/ClickAreaSetting;->left:Ljava/lang/Float;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    :cond_1
    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/ClickAreaSetting;->bottom:Ljava/lang/Float;

    if-eqz v1, :cond_2

    const-string v1, ", bottom="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/ClickAreaSetting;->bottom:Ljava/lang/Float;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    :cond_2
    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/ClickAreaSetting;->right:Ljava/lang/Float;

    if-eqz v1, :cond_3

    const-string v1, ", right="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/ClickAreaSetting;->right:Ljava/lang/Float;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    :cond_3
    const/4 v1, 0x0

    const/4 v2, 0x2

    const-string v3, "ClickAreaSetting{"

    invoke-virtual {v0, v1, v2, v3}, Ljava/lang/StringBuilder;->replace(IILjava/lang/String;)Ljava/lang/StringBuilder;

    move-result-object v0

    const/16 v1, 0x7d

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(C)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method
