.class public final enum Lcom/czhj/wire/protobuf/FieldOptions$CType;
.super Ljava/lang/Enum;

# interfaces
.implements Lcom/czhj/wire/WireEnum;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/czhj/wire/protobuf/FieldOptions;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x4019
    name = "CType"
.end annotation

.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/czhj/wire/protobuf/FieldOptions$CType$ProtoAdapter_CType;
    }
.end annotation

.annotation system Ldalvik/annotation/Signature;
    value = {
        "Ljava/lang/Enum<",
        "Lcom/czhj/wire/protobuf/FieldOptions$CType;",
        ">;",
        "Lcom/czhj/wire/WireEnum;"
    }
.end annotation


# static fields
.field private static final synthetic $VALUES:[Lcom/czhj/wire/protobuf/FieldOptions$CType;

.field public static final ADAPTER:Lcom/czhj/wire/ProtoAdapter;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Lcom/czhj/wire/ProtoAdapter<",
            "Lcom/czhj/wire/protobuf/FieldOptions$CType;",
            ">;"
        }
    .end annotation
.end field

.field public static final enum CORD:Lcom/czhj/wire/protobuf/FieldOptions$CType;

.field public static final enum STRING:Lcom/czhj/wire/protobuf/FieldOptions$CType;

.field public static final enum STRING_PIECE:Lcom/czhj/wire/protobuf/FieldOptions$CType;


# instance fields
.field private final value:I


# direct methods
.method static constructor <clinit>()V
    .locals 6

    new-instance v0, Lcom/czhj/wire/protobuf/FieldOptions$CType;

    const/4 v1, 0x0

    const-string v2, "STRING"

    invoke-direct {v0, v2, v1, v1}, Lcom/czhj/wire/protobuf/FieldOptions$CType;-><init>(Ljava/lang/String;II)V

    sput-object v0, Lcom/czhj/wire/protobuf/FieldOptions$CType;->STRING:Lcom/czhj/wire/protobuf/FieldOptions$CType;

    new-instance v0, Lcom/czhj/wire/protobuf/FieldOptions$CType;

    const/4 v2, 0x1

    const-string v3, "CORD"

    invoke-direct {v0, v3, v2, v2}, Lcom/czhj/wire/protobuf/FieldOptions$CType;-><init>(Ljava/lang/String;II)V

    sput-object v0, Lcom/czhj/wire/protobuf/FieldOptions$CType;->CORD:Lcom/czhj/wire/protobuf/FieldOptions$CType;

    new-instance v0, Lcom/czhj/wire/protobuf/FieldOptions$CType;

    const/4 v3, 0x2

    const-string v4, "STRING_PIECE"

    invoke-direct {v0, v4, v3, v3}, Lcom/czhj/wire/protobuf/FieldOptions$CType;-><init>(Ljava/lang/String;II)V

    sput-object v0, Lcom/czhj/wire/protobuf/FieldOptions$CType;->STRING_PIECE:Lcom/czhj/wire/protobuf/FieldOptions$CType;

    const/4 v4, 0x3

    new-array v4, v4, [Lcom/czhj/wire/protobuf/FieldOptions$CType;

    sget-object v5, Lcom/czhj/wire/protobuf/FieldOptions$CType;->STRING:Lcom/czhj/wire/protobuf/FieldOptions$CType;

    aput-object v5, v4, v1

    sget-object v1, Lcom/czhj/wire/protobuf/FieldOptions$CType;->CORD:Lcom/czhj/wire/protobuf/FieldOptions$CType;

    aput-object v1, v4, v2

    aput-object v0, v4, v3

    sput-object v4, Lcom/czhj/wire/protobuf/FieldOptions$CType;->$VALUES:[Lcom/czhj/wire/protobuf/FieldOptions$CType;

    new-instance v0, Lcom/czhj/wire/protobuf/FieldOptions$CType$ProtoAdapter_CType;

    invoke-direct {v0}, Lcom/czhj/wire/protobuf/FieldOptions$CType$ProtoAdapter_CType;-><init>()V

    sput-object v0, Lcom/czhj/wire/protobuf/FieldOptions$CType;->ADAPTER:Lcom/czhj/wire/ProtoAdapter;

    return-void
.end method

.method private constructor <init>(Ljava/lang/String;II)V
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(I)V"
        }
    .end annotation

    invoke-direct {p0, p1, p2}, Ljava/lang/Enum;-><init>(Ljava/lang/String;I)V

    iput p3, p0, Lcom/czhj/wire/protobuf/FieldOptions$CType;->value:I

    return-void
.end method

.method public static fromValue(I)Lcom/czhj/wire/protobuf/FieldOptions$CType;
    .locals 1

    if-eqz p0, :cond_2

    const/4 v0, 0x1

    if-eq p0, v0, :cond_1

    const/4 v0, 0x2

    if-eq p0, v0, :cond_0

    const/4 p0, 0x0

    return-object p0

    :cond_0
    sget-object p0, Lcom/czhj/wire/protobuf/FieldOptions$CType;->STRING_PIECE:Lcom/czhj/wire/protobuf/FieldOptions$CType;

    return-object p0

    :cond_1
    sget-object p0, Lcom/czhj/wire/protobuf/FieldOptions$CType;->CORD:Lcom/czhj/wire/protobuf/FieldOptions$CType;

    return-object p0

    :cond_2
    sget-object p0, Lcom/czhj/wire/protobuf/FieldOptions$CType;->STRING:Lcom/czhj/wire/protobuf/FieldOptions$CType;

    return-object p0
.end method

.method public static valueOf(Ljava/lang/String;)Lcom/czhj/wire/protobuf/FieldOptions$CType;
    .locals 1

    const-class v0, Lcom/czhj/wire/protobuf/FieldOptions$CType;

    invoke-static {v0, p0}, Ljava/lang/Enum;->valueOf(Ljava/lang/Class;Ljava/lang/String;)Ljava/lang/Enum;

    move-result-object p0

    check-cast p0, Lcom/czhj/wire/protobuf/FieldOptions$CType;

    return-object p0
.end method

.method public static values()[Lcom/czhj/wire/protobuf/FieldOptions$CType;
    .locals 1

    sget-object v0, Lcom/czhj/wire/protobuf/FieldOptions$CType;->$VALUES:[Lcom/czhj/wire/protobuf/FieldOptions$CType;

    invoke-virtual {v0}, [Lcom/czhj/wire/protobuf/FieldOptions$CType;->clone()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, [Lcom/czhj/wire/protobuf/FieldOptions$CType;

    return-object v0
.end method


# virtual methods
.method public getValue()I
    .locals 1

    iget v0, p0, Lcom/czhj/wire/protobuf/FieldOptions$CType;->value:I

    return v0
.end method
