.class public final Lcom/czhj/sdk/common/models/WXProgramReq;
.super Lcom/czhj/wire/AndroidMessage;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/czhj/sdk/common/models/WXProgramReq$ProtoAdapter_WXProgramReq;,
        Lcom/czhj/sdk/common/models/WXProgramReq$Builder;
    }
.end annotation

.annotation system Ldalvik/annotation/Signature;
    value = {
        "Lcom/czhj/wire/AndroidMessage<",
        "Lcom/czhj/sdk/common/models/WXProgramReq;",
        "Lcom/czhj/sdk/common/models/WXProgramReq$Builder;",
        ">;"
    }
.end annotation


# static fields
.field public static final ADAPTER:Lcom/czhj/wire/ProtoAdapter;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Lcom/czhj/wire/ProtoAdapter<",
            "Lcom/czhj/sdk/common/models/WXProgramReq;",
            ">;"
        }
    .end annotation
.end field

.field public static final CREATOR:Landroid/os/Parcelable$Creator;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Landroid/os/Parcelable$Creator<",
            "Lcom/czhj/sdk/common/models/WXProgramReq;",
            ">;"
        }
    .end annotation
.end field

.field public static final DEFAULT_OPENSDK_VER:Ljava/lang/String; = ""

.field public static final DEFAULT_WX_API_VER:Ljava/lang/Integer;

.field public static final DEFAULT_WX_INSTALLED:Ljava/lang/Boolean;

.field private static final serialVersionUID:J


# instance fields
.field public final opensdk_ver:Ljava/lang/String;
    .annotation runtime Lcom/czhj/wire/WireField;
        adapter = "com.squareup.wire.ProtoAdapter#STRING"
        tag = 0x2
    .end annotation
.end field

.field public final wx_api_ver:Ljava/lang/Integer;
    .annotation runtime Lcom/czhj/wire/WireField;
        adapter = "com.squareup.wire.ProtoAdapter#INT32"
        tag = 0x1
    .end annotation
.end field

.field public final wx_installed:Ljava/lang/Boolean;
    .annotation runtime Lcom/czhj/wire/WireField;
        adapter = "com.squareup.wire.ProtoAdapter#BOOL"
        tag = 0x3
    .end annotation
.end field


# direct methods
.method static constructor <clinit>()V
    .locals 2

    new-instance v0, Lcom/czhj/sdk/common/models/WXProgramReq$ProtoAdapter_WXProgramReq;

    invoke-direct {v0}, Lcom/czhj/sdk/common/models/WXProgramReq$ProtoAdapter_WXProgramReq;-><init>()V

    sput-object v0, Lcom/czhj/sdk/common/models/WXProgramReq;->ADAPTER:Lcom/czhj/wire/ProtoAdapter;

    invoke-static {v0}, Lcom/czhj/wire/AndroidMessage;->newCreator(Lcom/czhj/wire/ProtoAdapter;)Landroid/os/Parcelable$Creator;

    move-result-object v0

    sput-object v0, Lcom/czhj/sdk/common/models/WXProgramReq;->CREATOR:Landroid/os/Parcelable$Creator;

    const/4 v0, 0x0

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v1

    sput-object v1, Lcom/czhj/sdk/common/models/WXProgramReq;->DEFAULT_WX_API_VER:Ljava/lang/Integer;

    invoke-static {v0}, Ljava/lang/Boolean;->valueOf(Z)Ljava/lang/Boolean;

    move-result-object v0

    sput-object v0, Lcom/czhj/sdk/common/models/WXProgramReq;->DEFAULT_WX_INSTALLED:Ljava/lang/Boolean;

    return-void
.end method

.method public constructor <init>(Ljava/lang/Integer;Ljava/lang/String;Ljava/lang/Boolean;)V
    .locals 1

    sget-object v0, Lcom/czhj/wire/okio/ByteString;->EMPTY:Lcom/czhj/wire/okio/ByteString;

    invoke-direct {p0, p1, p2, p3, v0}, Lcom/czhj/sdk/common/models/WXProgramReq;-><init>(Ljava/lang/Integer;Ljava/lang/String;Ljava/lang/Boolean;Lcom/czhj/wire/okio/ByteString;)V

    return-void
.end method

.method public constructor <init>(Ljava/lang/Integer;Ljava/lang/String;Ljava/lang/Boolean;Lcom/czhj/wire/okio/ByteString;)V
    .locals 1

    sget-object v0, Lcom/czhj/sdk/common/models/WXProgramReq;->ADAPTER:Lcom/czhj/wire/ProtoAdapter;

    invoke-direct {p0, v0, p4}, Lcom/czhj/wire/AndroidMessage;-><init>(Lcom/czhj/wire/ProtoAdapter;Lcom/czhj/wire/okio/ByteString;)V

    iput-object p1, p0, Lcom/czhj/sdk/common/models/WXProgramReq;->wx_api_ver:Ljava/lang/Integer;

    iput-object p2, p0, Lcom/czhj/sdk/common/models/WXProgramReq;->opensdk_ver:Ljava/lang/String;

    iput-object p3, p0, Lcom/czhj/sdk/common/models/WXProgramReq;->wx_installed:Ljava/lang/Boolean;

    return-void
.end method


# virtual methods
.method public equals(Ljava/lang/Object;)Z
    .locals 4

    const/4 v0, 0x1

    if-ne p1, p0, :cond_0

    return v0

    :cond_0
    instance-of v1, p1, Lcom/czhj/sdk/common/models/WXProgramReq;

    const/4 v2, 0x0

    if-nez v1, :cond_1

    return v2

    :cond_1
    check-cast p1, Lcom/czhj/sdk/common/models/WXProgramReq;

    invoke-virtual {p0}, Lcom/czhj/sdk/common/models/WXProgramReq;->unknownFields()Lcom/czhj/wire/okio/ByteString;

    move-result-object v1

    invoke-virtual {p1}, Lcom/czhj/sdk/common/models/WXProgramReq;->unknownFields()Lcom/czhj/wire/okio/ByteString;

    move-result-object v3

    invoke-virtual {v1, v3}, Lcom/czhj/wire/okio/ByteString;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2

    iget-object v1, p0, Lcom/czhj/sdk/common/models/WXProgramReq;->wx_api_ver:Ljava/lang/Integer;

    iget-object v3, p1, Lcom/czhj/sdk/common/models/WXProgramReq;->wx_api_ver:Ljava/lang/Integer;

    invoke-static {v1, v3}, Lcom/czhj/wire/internal/Internal;->equals(Ljava/lang/Object;Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2

    iget-object v1, p0, Lcom/czhj/sdk/common/models/WXProgramReq;->opensdk_ver:Ljava/lang/String;

    iget-object v3, p1, Lcom/czhj/sdk/common/models/WXProgramReq;->opensdk_ver:Ljava/lang/String;

    invoke-static {v1, v3}, Lcom/czhj/wire/internal/Internal;->equals(Ljava/lang/Object;Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2

    iget-object v1, p0, Lcom/czhj/sdk/common/models/WXProgramReq;->wx_installed:Ljava/lang/Boolean;

    iget-object p1, p1, Lcom/czhj/sdk/common/models/WXProgramReq;->wx_installed:Ljava/lang/Boolean;

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

    invoke-virtual {p0}, Lcom/czhj/sdk/common/models/WXProgramReq;->unknownFields()Lcom/czhj/wire/okio/ByteString;

    move-result-object v0

    invoke-virtual {v0}, Lcom/czhj/wire/okio/ByteString;->hashCode()I

    move-result v0

    mul-int/lit8 v0, v0, 0x25

    iget-object v1, p0, Lcom/czhj/sdk/common/models/WXProgramReq;->wx_api_ver:Ljava/lang/Integer;

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

    iget-object v1, p0, Lcom/czhj/sdk/common/models/WXProgramReq;->opensdk_ver:Ljava/lang/String;

    if-eqz v1, :cond_1

    invoke-virtual {v1}, Ljava/lang/String;->hashCode()I

    move-result v1

    goto :goto_1

    :cond_1
    move v1, v2

    :goto_1
    add-int/2addr v0, v1

    mul-int/lit8 v0, v0, 0x25

    iget-object v1, p0, Lcom/czhj/sdk/common/models/WXProgramReq;->wx_installed:Ljava/lang/Boolean;

    if-eqz v1, :cond_2

    invoke-virtual {v1}, Ljava/lang/Boolean;->hashCode()I

    move-result v2

    :cond_2
    add-int/2addr v0, v2

    iput v0, p0, Lcom/czhj/wire/AndroidMessage;->hashCode:I

    :cond_3
    return v0
.end method

.method public newBuilder()Lcom/czhj/sdk/common/models/WXProgramReq$Builder;
    .locals 2

    new-instance v0, Lcom/czhj/sdk/common/models/WXProgramReq$Builder;

    invoke-direct {v0}, Lcom/czhj/sdk/common/models/WXProgramReq$Builder;-><init>()V

    iget-object v1, p0, Lcom/czhj/sdk/common/models/WXProgramReq;->wx_api_ver:Ljava/lang/Integer;

    iput-object v1, v0, Lcom/czhj/sdk/common/models/WXProgramReq$Builder;->wx_api_ver:Ljava/lang/Integer;

    iget-object v1, p0, Lcom/czhj/sdk/common/models/WXProgramReq;->opensdk_ver:Ljava/lang/String;

    iput-object v1, v0, Lcom/czhj/sdk/common/models/WXProgramReq$Builder;->opensdk_ver:Ljava/lang/String;

    iget-object v1, p0, Lcom/czhj/sdk/common/models/WXProgramReq;->wx_installed:Ljava/lang/Boolean;

    iput-object v1, v0, Lcom/czhj/sdk/common/models/WXProgramReq$Builder;->wx_installed:Ljava/lang/Boolean;

    invoke-virtual {p0}, Lcom/czhj/sdk/common/models/WXProgramReq;->unknownFields()Lcom/czhj/wire/okio/ByteString;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/czhj/sdk/common/models/WXProgramReq$Builder;->addUnknownFields(Lcom/czhj/wire/okio/ByteString;)Lcom/czhj/wire/Message$Builder;

    return-object v0
.end method

.method public bridge synthetic newBuilder()Lcom/czhj/wire/Message$Builder;
    .locals 1

    invoke-virtual {p0}, Lcom/czhj/sdk/common/models/WXProgramReq;->newBuilder()Lcom/czhj/sdk/common/models/WXProgramReq$Builder;

    move-result-object v0

    return-object v0
.end method

.method public toString()Ljava/lang/String;
    .locals 4

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v1, p0, Lcom/czhj/sdk/common/models/WXProgramReq;->wx_api_ver:Ljava/lang/Integer;

    if-eqz v1, :cond_0

    const-string v1, ", wx_api_ver="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/czhj/sdk/common/models/WXProgramReq;->wx_api_ver:Ljava/lang/Integer;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    :cond_0
    iget-object v1, p0, Lcom/czhj/sdk/common/models/WXProgramReq;->opensdk_ver:Ljava/lang/String;

    if-eqz v1, :cond_1

    const-string v1, ", opensdk_ver="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/czhj/sdk/common/models/WXProgramReq;->opensdk_ver:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    :cond_1
    iget-object v1, p0, Lcom/czhj/sdk/common/models/WXProgramReq;->wx_installed:Ljava/lang/Boolean;

    if-eqz v1, :cond_2

    const-string v1, ", wx_installed="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/czhj/sdk/common/models/WXProgramReq;->wx_installed:Ljava/lang/Boolean;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    :cond_2
    const/4 v1, 0x0

    const/4 v2, 0x2

    const-string v3, "WXProgramReq{"

    invoke-virtual {v0, v1, v2, v3}, Ljava/lang/StringBuilder;->replace(IILjava/lang/String;)Ljava/lang/StringBuilder;

    move-result-object v0

    const/16 v1, 0x7d

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(C)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method
