.class public final Lcom/czhj/wire/protobuf/UninterpretedOption$NamePart;
.super Lcom/czhj/wire/Message;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/czhj/wire/protobuf/UninterpretedOption;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x19
    name = "NamePart"
.end annotation

.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/czhj/wire/protobuf/UninterpretedOption$NamePart$ProtoAdapter_NamePart;,
        Lcom/czhj/wire/protobuf/UninterpretedOption$NamePart$Builder;
    }
.end annotation

.annotation system Ldalvik/annotation/Signature;
    value = {
        "Lcom/czhj/wire/Message<",
        "Lcom/czhj/wire/protobuf/UninterpretedOption$NamePart;",
        "Lcom/czhj/wire/protobuf/UninterpretedOption$NamePart$Builder;",
        ">;"
    }
.end annotation


# static fields
.field public static final ADAPTER:Lcom/czhj/wire/ProtoAdapter;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Lcom/czhj/wire/ProtoAdapter<",
            "Lcom/czhj/wire/protobuf/UninterpretedOption$NamePart;",
            ">;"
        }
    .end annotation
.end field

.field public static final DEFAULT_IS_EXTENSION:Ljava/lang/Boolean;

.field public static final DEFAULT_NAME_PART:Ljava/lang/String; = ""

.field private static final serialVersionUID:J


# instance fields
.field public final is_extension:Ljava/lang/Boolean;
    .annotation runtime Lcom/czhj/wire/WireField;
        adapter = "com.squareup.wire.ProtoAdapter#BOOL"
        label = .enum Lcom/czhj/wire/WireField$Label;->REQUIRED:Lcom/czhj/wire/WireField$Label;
        tag = 0x2
    .end annotation
.end field

.field public final name_part:Ljava/lang/String;
    .annotation runtime Lcom/czhj/wire/WireField;
        adapter = "com.squareup.wire.ProtoAdapter#STRING"
        label = .enum Lcom/czhj/wire/WireField$Label;->REQUIRED:Lcom/czhj/wire/WireField$Label;
        tag = 0x1
    .end annotation
.end field


# direct methods
.method static constructor <clinit>()V
    .locals 1

    new-instance v0, Lcom/czhj/wire/protobuf/UninterpretedOption$NamePart$ProtoAdapter_NamePart;

    invoke-direct {v0}, Lcom/czhj/wire/protobuf/UninterpretedOption$NamePart$ProtoAdapter_NamePart;-><init>()V

    sput-object v0, Lcom/czhj/wire/protobuf/UninterpretedOption$NamePart;->ADAPTER:Lcom/czhj/wire/ProtoAdapter;

    const/4 v0, 0x0

    invoke-static {v0}, Ljava/lang/Boolean;->valueOf(Z)Ljava/lang/Boolean;

    move-result-object v0

    sput-object v0, Lcom/czhj/wire/protobuf/UninterpretedOption$NamePart;->DEFAULT_IS_EXTENSION:Ljava/lang/Boolean;

    return-void
.end method

.method public constructor <init>(Ljava/lang/String;Ljava/lang/Boolean;)V
    .locals 1

    sget-object v0, Lcom/czhj/wire/okio/ByteString;->EMPTY:Lcom/czhj/wire/okio/ByteString;

    invoke-direct {p0, p1, p2, v0}, Lcom/czhj/wire/protobuf/UninterpretedOption$NamePart;-><init>(Ljava/lang/String;Ljava/lang/Boolean;Lcom/czhj/wire/okio/ByteString;)V

    return-void
.end method

.method public constructor <init>(Ljava/lang/String;Ljava/lang/Boolean;Lcom/czhj/wire/okio/ByteString;)V
    .locals 1

    sget-object v0, Lcom/czhj/wire/protobuf/UninterpretedOption$NamePart;->ADAPTER:Lcom/czhj/wire/ProtoAdapter;

    invoke-direct {p0, v0, p3}, Lcom/czhj/wire/Message;-><init>(Lcom/czhj/wire/ProtoAdapter;Lcom/czhj/wire/okio/ByteString;)V

    iput-object p1, p0, Lcom/czhj/wire/protobuf/UninterpretedOption$NamePart;->name_part:Ljava/lang/String;

    iput-object p2, p0, Lcom/czhj/wire/protobuf/UninterpretedOption$NamePart;->is_extension:Ljava/lang/Boolean;

    return-void
.end method


# virtual methods
.method public equals(Ljava/lang/Object;)Z
    .locals 4

    const/4 v0, 0x1

    if-ne p1, p0, :cond_0

    return v0

    :cond_0
    instance-of v1, p1, Lcom/czhj/wire/protobuf/UninterpretedOption$NamePart;

    const/4 v2, 0x0

    if-nez v1, :cond_1

    return v2

    :cond_1
    check-cast p1, Lcom/czhj/wire/protobuf/UninterpretedOption$NamePart;

    invoke-virtual {p0}, Lcom/czhj/wire/protobuf/UninterpretedOption$NamePart;->unknownFields()Lcom/czhj/wire/okio/ByteString;

    move-result-object v1

    invoke-virtual {p1}, Lcom/czhj/wire/protobuf/UninterpretedOption$NamePart;->unknownFields()Lcom/czhj/wire/okio/ByteString;

    move-result-object v3

    invoke-virtual {v1, v3}, Lcom/czhj/wire/okio/ByteString;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2

    iget-object v1, p0, Lcom/czhj/wire/protobuf/UninterpretedOption$NamePart;->name_part:Ljava/lang/String;

    iget-object v3, p1, Lcom/czhj/wire/protobuf/UninterpretedOption$NamePart;->name_part:Ljava/lang/String;

    invoke-virtual {v1, v3}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2

    iget-object v1, p0, Lcom/czhj/wire/protobuf/UninterpretedOption$NamePart;->is_extension:Ljava/lang/Boolean;

    iget-object p1, p1, Lcom/czhj/wire/protobuf/UninterpretedOption$NamePart;->is_extension:Ljava/lang/Boolean;

    invoke-virtual {v1, p1}, Ljava/lang/Boolean;->equals(Ljava/lang/Object;)Z

    move-result p1

    if-eqz p1, :cond_2

    goto :goto_0

    :cond_2
    move v0, v2

    :goto_0
    return v0
.end method

.method public hashCode()I
    .locals 2

    iget v0, p0, Lcom/czhj/wire/Message;->hashCode:I

    if-nez v0, :cond_0

    invoke-virtual {p0}, Lcom/czhj/wire/protobuf/UninterpretedOption$NamePart;->unknownFields()Lcom/czhj/wire/okio/ByteString;

    move-result-object v0

    invoke-virtual {v0}, Lcom/czhj/wire/okio/ByteString;->hashCode()I

    move-result v0

    mul-int/lit8 v0, v0, 0x25

    iget-object v1, p0, Lcom/czhj/wire/protobuf/UninterpretedOption$NamePart;->name_part:Ljava/lang/String;

    invoke-virtual {v1}, Ljava/lang/String;->hashCode()I

    move-result v1

    add-int/2addr v0, v1

    mul-int/lit8 v0, v0, 0x25

    iget-object v1, p0, Lcom/czhj/wire/protobuf/UninterpretedOption$NamePart;->is_extension:Ljava/lang/Boolean;

    invoke-virtual {v1}, Ljava/lang/Boolean;->hashCode()I

    move-result v1

    add-int/2addr v0, v1

    iput v0, p0, Lcom/czhj/wire/Message;->hashCode:I

    :cond_0
    return v0
.end method

.method public bridge synthetic newBuilder()Lcom/czhj/wire/Message$Builder;
    .locals 1

    invoke-virtual {p0}, Lcom/czhj/wire/protobuf/UninterpretedOption$NamePart;->newBuilder()Lcom/czhj/wire/protobuf/UninterpretedOption$NamePart$Builder;

    move-result-object v0

    return-object v0
.end method

.method public newBuilder()Lcom/czhj/wire/protobuf/UninterpretedOption$NamePart$Builder;
    .locals 2

    new-instance v0, Lcom/czhj/wire/protobuf/UninterpretedOption$NamePart$Builder;

    invoke-direct {v0}, Lcom/czhj/wire/protobuf/UninterpretedOption$NamePart$Builder;-><init>()V

    iget-object v1, p0, Lcom/czhj/wire/protobuf/UninterpretedOption$NamePart;->name_part:Ljava/lang/String;

    iput-object v1, v0, Lcom/czhj/wire/protobuf/UninterpretedOption$NamePart$Builder;->name_part:Ljava/lang/String;

    iget-object v1, p0, Lcom/czhj/wire/protobuf/UninterpretedOption$NamePart;->is_extension:Ljava/lang/Boolean;

    iput-object v1, v0, Lcom/czhj/wire/protobuf/UninterpretedOption$NamePart$Builder;->is_extension:Ljava/lang/Boolean;

    invoke-virtual {p0}, Lcom/czhj/wire/protobuf/UninterpretedOption$NamePart;->unknownFields()Lcom/czhj/wire/okio/ByteString;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/czhj/wire/protobuf/UninterpretedOption$NamePart$Builder;->addUnknownFields(Lcom/czhj/wire/okio/ByteString;)Lcom/czhj/wire/Message$Builder;

    return-object v0
.end method

.method public toString()Ljava/lang/String;
    .locals 4

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, ", name_part="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/czhj/wire/protobuf/UninterpretedOption$NamePart;->name_part:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, ", is_extension="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/czhj/wire/protobuf/UninterpretedOption$NamePart;->is_extension:Ljava/lang/Boolean;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    const/4 v1, 0x0

    const/4 v2, 0x2

    const-string v3, "NamePart{"

    invoke-virtual {v0, v1, v2, v3}, Ljava/lang/StringBuilder;->replace(IILjava/lang/String;)Ljava/lang/StringBuilder;

    move-result-object v0

    const/16 v1, 0x7d

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(C)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method
