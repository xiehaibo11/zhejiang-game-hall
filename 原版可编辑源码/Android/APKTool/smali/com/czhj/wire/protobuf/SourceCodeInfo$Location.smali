.class public final Lcom/czhj/wire/protobuf/SourceCodeInfo$Location;
.super Lcom/czhj/wire/Message;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/czhj/wire/protobuf/SourceCodeInfo;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x19
    name = "Location"
.end annotation

.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/czhj/wire/protobuf/SourceCodeInfo$Location$ProtoAdapter_Location;,
        Lcom/czhj/wire/protobuf/SourceCodeInfo$Location$Builder;
    }
.end annotation

.annotation system Ldalvik/annotation/Signature;
    value = {
        "Lcom/czhj/wire/Message<",
        "Lcom/czhj/wire/protobuf/SourceCodeInfo$Location;",
        "Lcom/czhj/wire/protobuf/SourceCodeInfo$Location$Builder;",
        ">;"
    }
.end annotation


# static fields
.field public static final ADAPTER:Lcom/czhj/wire/ProtoAdapter;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Lcom/czhj/wire/ProtoAdapter<",
            "Lcom/czhj/wire/protobuf/SourceCodeInfo$Location;",
            ">;"
        }
    .end annotation
.end field

.field public static final DEFAULT_LEADING_COMMENTS:Ljava/lang/String; = ""

.field public static final DEFAULT_TRAILING_COMMENTS:Ljava/lang/String; = ""

.field private static final serialVersionUID:J


# instance fields
.field public final leading_comments:Ljava/lang/String;
    .annotation runtime Lcom/czhj/wire/WireField;
        adapter = "com.squareup.wire.ProtoAdapter#STRING"
        tag = 0x3
    .end annotation
.end field

.field public final leading_detached_comments:Ljava/util/List;
    .annotation runtime Lcom/czhj/wire/WireField;
        adapter = "com.squareup.wire.ProtoAdapter#STRING"
        label = .enum Lcom/czhj/wire/WireField$Label;->REPEATED:Lcom/czhj/wire/WireField$Label;
        tag = 0x6
    .end annotation

    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field

.field public final path:Ljava/util/List;
    .annotation runtime Lcom/czhj/wire/WireField;
        adapter = "com.squareup.wire.ProtoAdapter#INT32"
        label = .enum Lcom/czhj/wire/WireField$Label;->PACKED:Lcom/czhj/wire/WireField$Label;
        tag = 0x1
    .end annotation

    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Ljava/lang/Integer;",
            ">;"
        }
    .end annotation
.end field

.field public final span:Ljava/util/List;
    .annotation runtime Lcom/czhj/wire/WireField;
        adapter = "com.squareup.wire.ProtoAdapter#INT32"
        label = .enum Lcom/czhj/wire/WireField$Label;->PACKED:Lcom/czhj/wire/WireField$Label;
        tag = 0x2
    .end annotation

    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Ljava/lang/Integer;",
            ">;"
        }
    .end annotation
.end field

.field public final trailing_comments:Ljava/lang/String;
    .annotation runtime Lcom/czhj/wire/WireField;
        adapter = "com.squareup.wire.ProtoAdapter#STRING"
        tag = 0x4
    .end annotation
.end field


# direct methods
.method static constructor <clinit>()V
    .locals 1

    new-instance v0, Lcom/czhj/wire/protobuf/SourceCodeInfo$Location$ProtoAdapter_Location;

    invoke-direct {v0}, Lcom/czhj/wire/protobuf/SourceCodeInfo$Location$ProtoAdapter_Location;-><init>()V

    sput-object v0, Lcom/czhj/wire/protobuf/SourceCodeInfo$Location;->ADAPTER:Lcom/czhj/wire/ProtoAdapter;

    return-void
.end method

.method public constructor <init>(Ljava/util/List;Ljava/util/List;Ljava/lang/String;Ljava/lang/String;Ljava/util/List;)V
    .locals 7
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/List<",
            "Ljava/lang/Integer;",
            ">;",
            "Ljava/util/List<",
            "Ljava/lang/Integer;",
            ">;",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            "Ljava/util/List<",
            "Ljava/lang/String;",
            ">;)V"
        }
    .end annotation

    sget-object v6, Lcom/czhj/wire/okio/ByteString;->EMPTY:Lcom/czhj/wire/okio/ByteString;

    move-object v0, p0

    move-object v1, p1

    move-object v2, p2

    move-object v3, p3

    move-object v4, p4

    move-object v5, p5

    invoke-direct/range {v0 .. v6}, Lcom/czhj/wire/protobuf/SourceCodeInfo$Location;-><init>(Ljava/util/List;Ljava/util/List;Ljava/lang/String;Ljava/lang/String;Ljava/util/List;Lcom/czhj/wire/okio/ByteString;)V

    return-void
.end method

.method public constructor <init>(Ljava/util/List;Ljava/util/List;Ljava/lang/String;Ljava/lang/String;Ljava/util/List;Lcom/czhj/wire/okio/ByteString;)V
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/List<",
            "Ljava/lang/Integer;",
            ">;",
            "Ljava/util/List<",
            "Ljava/lang/Integer;",
            ">;",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            "Ljava/util/List<",
            "Ljava/lang/String;",
            ">;",
            "Lcom/czhj/wire/okio/ByteString;",
            ")V"
        }
    .end annotation

    sget-object v0, Lcom/czhj/wire/protobuf/SourceCodeInfo$Location;->ADAPTER:Lcom/czhj/wire/ProtoAdapter;

    invoke-direct {p0, v0, p6}, Lcom/czhj/wire/Message;-><init>(Lcom/czhj/wire/ProtoAdapter;Lcom/czhj/wire/okio/ByteString;)V

    const-string p6, "path"

    invoke-static {p6, p1}, Lcom/czhj/wire/internal/Internal;->immutableCopyOf(Ljava/lang/String;Ljava/util/List;)Ljava/util/List;

    move-result-object p1

    iput-object p1, p0, Lcom/czhj/wire/protobuf/SourceCodeInfo$Location;->path:Ljava/util/List;

    const-string p1, "span"

    invoke-static {p1, p2}, Lcom/czhj/wire/internal/Internal;->immutableCopyOf(Ljava/lang/String;Ljava/util/List;)Ljava/util/List;

    move-result-object p1

    iput-object p1, p0, Lcom/czhj/wire/protobuf/SourceCodeInfo$Location;->span:Ljava/util/List;

    iput-object p3, p0, Lcom/czhj/wire/protobuf/SourceCodeInfo$Location;->leading_comments:Ljava/lang/String;

    iput-object p4, p0, Lcom/czhj/wire/protobuf/SourceCodeInfo$Location;->trailing_comments:Ljava/lang/String;

    const-string p1, "leading_detached_comments"

    invoke-static {p1, p5}, Lcom/czhj/wire/internal/Internal;->immutableCopyOf(Ljava/lang/String;Ljava/util/List;)Ljava/util/List;

    move-result-object p1

    iput-object p1, p0, Lcom/czhj/wire/protobuf/SourceCodeInfo$Location;->leading_detached_comments:Ljava/util/List;

    return-void
.end method


# virtual methods
.method public equals(Ljava/lang/Object;)Z
    .locals 4

    const/4 v0, 0x1

    if-ne p1, p0, :cond_0

    return v0

    :cond_0
    instance-of v1, p1, Lcom/czhj/wire/protobuf/SourceCodeInfo$Location;

    const/4 v2, 0x0

    if-nez v1, :cond_1

    return v2

    :cond_1
    check-cast p1, Lcom/czhj/wire/protobuf/SourceCodeInfo$Location;

    invoke-virtual {p0}, Lcom/czhj/wire/protobuf/SourceCodeInfo$Location;->unknownFields()Lcom/czhj/wire/okio/ByteString;

    move-result-object v1

    invoke-virtual {p1}, Lcom/czhj/wire/protobuf/SourceCodeInfo$Location;->unknownFields()Lcom/czhj/wire/okio/ByteString;

    move-result-object v3

    invoke-virtual {v1, v3}, Lcom/czhj/wire/okio/ByteString;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2

    iget-object v1, p0, Lcom/czhj/wire/protobuf/SourceCodeInfo$Location;->path:Ljava/util/List;

    iget-object v3, p1, Lcom/czhj/wire/protobuf/SourceCodeInfo$Location;->path:Ljava/util/List;

    invoke-interface {v1, v3}, Ljava/util/List;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2

    iget-object v1, p0, Lcom/czhj/wire/protobuf/SourceCodeInfo$Location;->span:Ljava/util/List;

    iget-object v3, p1, Lcom/czhj/wire/protobuf/SourceCodeInfo$Location;->span:Ljava/util/List;

    invoke-interface {v1, v3}, Ljava/util/List;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2

    iget-object v1, p0, Lcom/czhj/wire/protobuf/SourceCodeInfo$Location;->leading_comments:Ljava/lang/String;

    iget-object v3, p1, Lcom/czhj/wire/protobuf/SourceCodeInfo$Location;->leading_comments:Ljava/lang/String;

    invoke-static {v1, v3}, Lcom/czhj/wire/internal/Internal;->equals(Ljava/lang/Object;Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2

    iget-object v1, p0, Lcom/czhj/wire/protobuf/SourceCodeInfo$Location;->trailing_comments:Ljava/lang/String;

    iget-object v3, p1, Lcom/czhj/wire/protobuf/SourceCodeInfo$Location;->trailing_comments:Ljava/lang/String;

    invoke-static {v1, v3}, Lcom/czhj/wire/internal/Internal;->equals(Ljava/lang/Object;Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2

    iget-object v1, p0, Lcom/czhj/wire/protobuf/SourceCodeInfo$Location;->leading_detached_comments:Ljava/util/List;

    iget-object p1, p1, Lcom/czhj/wire/protobuf/SourceCodeInfo$Location;->leading_detached_comments:Ljava/util/List;

    invoke-interface {v1, p1}, Ljava/util/List;->equals(Ljava/lang/Object;)Z

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

    iget v0, p0, Lcom/czhj/wire/Message;->hashCode:I

    if-nez v0, :cond_2

    invoke-virtual {p0}, Lcom/czhj/wire/protobuf/SourceCodeInfo$Location;->unknownFields()Lcom/czhj/wire/okio/ByteString;

    move-result-object v0

    invoke-virtual {v0}, Lcom/czhj/wire/okio/ByteString;->hashCode()I

    move-result v0

    mul-int/lit8 v0, v0, 0x25

    iget-object v1, p0, Lcom/czhj/wire/protobuf/SourceCodeInfo$Location;->path:Ljava/util/List;

    invoke-interface {v1}, Ljava/util/List;->hashCode()I

    move-result v1

    add-int/2addr v0, v1

    mul-int/lit8 v0, v0, 0x25

    iget-object v1, p0, Lcom/czhj/wire/protobuf/SourceCodeInfo$Location;->span:Ljava/util/List;

    invoke-interface {v1}, Ljava/util/List;->hashCode()I

    move-result v1

    add-int/2addr v0, v1

    mul-int/lit8 v0, v0, 0x25

    iget-object v1, p0, Lcom/czhj/wire/protobuf/SourceCodeInfo$Location;->leading_comments:Ljava/lang/String;

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

    iget-object v1, p0, Lcom/czhj/wire/protobuf/SourceCodeInfo$Location;->trailing_comments:Ljava/lang/String;

    if-eqz v1, :cond_1

    invoke-virtual {v1}, Ljava/lang/String;->hashCode()I

    move-result v2

    :cond_1
    add-int/2addr v0, v2

    mul-int/lit8 v0, v0, 0x25

    iget-object v1, p0, Lcom/czhj/wire/protobuf/SourceCodeInfo$Location;->leading_detached_comments:Ljava/util/List;

    invoke-interface {v1}, Ljava/util/List;->hashCode()I

    move-result v1

    add-int/2addr v0, v1

    iput v0, p0, Lcom/czhj/wire/Message;->hashCode:I

    :cond_2
    return v0
.end method

.method public bridge synthetic newBuilder()Lcom/czhj/wire/Message$Builder;
    .locals 1

    invoke-virtual {p0}, Lcom/czhj/wire/protobuf/SourceCodeInfo$Location;->newBuilder()Lcom/czhj/wire/protobuf/SourceCodeInfo$Location$Builder;

    move-result-object v0

    return-object v0
.end method

.method public newBuilder()Lcom/czhj/wire/protobuf/SourceCodeInfo$Location$Builder;
    .locals 3

    new-instance v0, Lcom/czhj/wire/protobuf/SourceCodeInfo$Location$Builder;

    invoke-direct {v0}, Lcom/czhj/wire/protobuf/SourceCodeInfo$Location$Builder;-><init>()V

    iget-object v1, p0, Lcom/czhj/wire/protobuf/SourceCodeInfo$Location;->path:Ljava/util/List;

    const-string v2, "path"

    invoke-static {v2, v1}, Lcom/czhj/wire/internal/Internal;->copyOf(Ljava/lang/String;Ljava/util/List;)Ljava/util/List;

    move-result-object v1

    iput-object v1, v0, Lcom/czhj/wire/protobuf/SourceCodeInfo$Location$Builder;->path:Ljava/util/List;

    iget-object v1, p0, Lcom/czhj/wire/protobuf/SourceCodeInfo$Location;->span:Ljava/util/List;

    const-string v2, "span"

    invoke-static {v2, v1}, Lcom/czhj/wire/internal/Internal;->copyOf(Ljava/lang/String;Ljava/util/List;)Ljava/util/List;

    move-result-object v1

    iput-object v1, v0, Lcom/czhj/wire/protobuf/SourceCodeInfo$Location$Builder;->span:Ljava/util/List;

    iget-object v1, p0, Lcom/czhj/wire/protobuf/SourceCodeInfo$Location;->leading_comments:Ljava/lang/String;

    iput-object v1, v0, Lcom/czhj/wire/protobuf/SourceCodeInfo$Location$Builder;->leading_comments:Ljava/lang/String;

    iget-object v1, p0, Lcom/czhj/wire/protobuf/SourceCodeInfo$Location;->trailing_comments:Ljava/lang/String;

    iput-object v1, v0, Lcom/czhj/wire/protobuf/SourceCodeInfo$Location$Builder;->trailing_comments:Ljava/lang/String;

    iget-object v1, p0, Lcom/czhj/wire/protobuf/SourceCodeInfo$Location;->leading_detached_comments:Ljava/util/List;

    const-string v2, "leading_detached_comments"

    invoke-static {v2, v1}, Lcom/czhj/wire/internal/Internal;->copyOf(Ljava/lang/String;Ljava/util/List;)Ljava/util/List;

    move-result-object v1

    iput-object v1, v0, Lcom/czhj/wire/protobuf/SourceCodeInfo$Location$Builder;->leading_detached_comments:Ljava/util/List;

    invoke-virtual {p0}, Lcom/czhj/wire/protobuf/SourceCodeInfo$Location;->unknownFields()Lcom/czhj/wire/okio/ByteString;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/czhj/wire/protobuf/SourceCodeInfo$Location$Builder;->addUnknownFields(Lcom/czhj/wire/okio/ByteString;)Lcom/czhj/wire/Message$Builder;

    return-object v0
.end method

.method public toString()Ljava/lang/String;
    .locals 4

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v1, p0, Lcom/czhj/wire/protobuf/SourceCodeInfo$Location;->path:Ljava/util/List;

    invoke-interface {v1}, Ljava/util/List;->isEmpty()Z

    move-result v1

    if-nez v1, :cond_0

    const-string v1, ", path="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/czhj/wire/protobuf/SourceCodeInfo$Location;->path:Ljava/util/List;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    :cond_0
    iget-object v1, p0, Lcom/czhj/wire/protobuf/SourceCodeInfo$Location;->span:Ljava/util/List;

    invoke-interface {v1}, Ljava/util/List;->isEmpty()Z

    move-result v1

    if-nez v1, :cond_1

    const-string v1, ", span="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/czhj/wire/protobuf/SourceCodeInfo$Location;->span:Ljava/util/List;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    :cond_1
    iget-object v1, p0, Lcom/czhj/wire/protobuf/SourceCodeInfo$Location;->leading_comments:Ljava/lang/String;

    if-eqz v1, :cond_2

    const-string v1, ", leading_comments="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/czhj/wire/protobuf/SourceCodeInfo$Location;->leading_comments:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    :cond_2
    iget-object v1, p0, Lcom/czhj/wire/protobuf/SourceCodeInfo$Location;->trailing_comments:Ljava/lang/String;

    if-eqz v1, :cond_3

    const-string v1, ", trailing_comments="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/czhj/wire/protobuf/SourceCodeInfo$Location;->trailing_comments:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    :cond_3
    iget-object v1, p0, Lcom/czhj/wire/protobuf/SourceCodeInfo$Location;->leading_detached_comments:Ljava/util/List;

    invoke-interface {v1}, Ljava/util/List;->isEmpty()Z

    move-result v1

    if-nez v1, :cond_4

    const-string v1, ", leading_detached_comments="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/czhj/wire/protobuf/SourceCodeInfo$Location;->leading_detached_comments:Ljava/util/List;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    :cond_4
    const/4 v1, 0x0

    const/4 v2, 0x2

    const-string v3, "Location{"

    invoke-virtual {v0, v1, v2, v3}, Ljava/lang/StringBuilder;->replace(IILjava/lang/String;)Ljava/lang/StringBuilder;

    move-result-object v0

    const/16 v1, 0x7d

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(C)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method
