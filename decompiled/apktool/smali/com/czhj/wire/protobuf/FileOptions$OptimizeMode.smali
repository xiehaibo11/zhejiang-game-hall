.class public final enum Lcom/czhj/wire/protobuf/FileOptions$OptimizeMode;
.super Ljava/lang/Enum;

# interfaces
.implements Lcom/czhj/wire/WireEnum;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/czhj/wire/protobuf/FileOptions;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x4019
    name = "OptimizeMode"
.end annotation

.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/czhj/wire/protobuf/FileOptions$OptimizeMode$ProtoAdapter_OptimizeMode;
    }
.end annotation

.annotation system Ldalvik/annotation/Signature;
    value = {
        "Ljava/lang/Enum<",
        "Lcom/czhj/wire/protobuf/FileOptions$OptimizeMode;",
        ">;",
        "Lcom/czhj/wire/WireEnum;"
    }
.end annotation


# static fields
.field private static final synthetic $VALUES:[Lcom/czhj/wire/protobuf/FileOptions$OptimizeMode;

.field public static final ADAPTER:Lcom/czhj/wire/ProtoAdapter;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Lcom/czhj/wire/ProtoAdapter<",
            "Lcom/czhj/wire/protobuf/FileOptions$OptimizeMode;",
            ">;"
        }
    .end annotation
.end field

.field public static final enum CODE_SIZE:Lcom/czhj/wire/protobuf/FileOptions$OptimizeMode;

.field public static final enum LITE_RUNTIME:Lcom/czhj/wire/protobuf/FileOptions$OptimizeMode;

.field public static final enum SPEED:Lcom/czhj/wire/protobuf/FileOptions$OptimizeMode;


# instance fields
.field private final value:I


# direct methods
.method static constructor <clinit>()V
    .locals 6

    new-instance v0, Lcom/czhj/wire/protobuf/FileOptions$OptimizeMode;

    const/4 v1, 0x0

    const/4 v2, 0x1

    const-string v3, "SPEED"

    invoke-direct {v0, v3, v1, v2}, Lcom/czhj/wire/protobuf/FileOptions$OptimizeMode;-><init>(Ljava/lang/String;II)V

    sput-object v0, Lcom/czhj/wire/protobuf/FileOptions$OptimizeMode;->SPEED:Lcom/czhj/wire/protobuf/FileOptions$OptimizeMode;

    new-instance v0, Lcom/czhj/wire/protobuf/FileOptions$OptimizeMode;

    const/4 v3, 0x2

    const-string v4, "CODE_SIZE"

    invoke-direct {v0, v4, v2, v3}, Lcom/czhj/wire/protobuf/FileOptions$OptimizeMode;-><init>(Ljava/lang/String;II)V

    sput-object v0, Lcom/czhj/wire/protobuf/FileOptions$OptimizeMode;->CODE_SIZE:Lcom/czhj/wire/protobuf/FileOptions$OptimizeMode;

    new-instance v0, Lcom/czhj/wire/protobuf/FileOptions$OptimizeMode;

    const/4 v4, 0x3

    const-string v5, "LITE_RUNTIME"

    invoke-direct {v0, v5, v3, v4}, Lcom/czhj/wire/protobuf/FileOptions$OptimizeMode;-><init>(Ljava/lang/String;II)V

    sput-object v0, Lcom/czhj/wire/protobuf/FileOptions$OptimizeMode;->LITE_RUNTIME:Lcom/czhj/wire/protobuf/FileOptions$OptimizeMode;

    new-array v4, v4, [Lcom/czhj/wire/protobuf/FileOptions$OptimizeMode;

    sget-object v5, Lcom/czhj/wire/protobuf/FileOptions$OptimizeMode;->SPEED:Lcom/czhj/wire/protobuf/FileOptions$OptimizeMode;

    aput-object v5, v4, v1

    sget-object v1, Lcom/czhj/wire/protobuf/FileOptions$OptimizeMode;->CODE_SIZE:Lcom/czhj/wire/protobuf/FileOptions$OptimizeMode;

    aput-object v1, v4, v2

    aput-object v0, v4, v3

    sput-object v4, Lcom/czhj/wire/protobuf/FileOptions$OptimizeMode;->$VALUES:[Lcom/czhj/wire/protobuf/FileOptions$OptimizeMode;

    new-instance v0, Lcom/czhj/wire/protobuf/FileOptions$OptimizeMode$ProtoAdapter_OptimizeMode;

    invoke-direct {v0}, Lcom/czhj/wire/protobuf/FileOptions$OptimizeMode$ProtoAdapter_OptimizeMode;-><init>()V

    sput-object v0, Lcom/czhj/wire/protobuf/FileOptions$OptimizeMode;->ADAPTER:Lcom/czhj/wire/ProtoAdapter;

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

    iput p3, p0, Lcom/czhj/wire/protobuf/FileOptions$OptimizeMode;->value:I

    return-void
.end method

.method public static fromValue(I)Lcom/czhj/wire/protobuf/FileOptions$OptimizeMode;
    .locals 1

    const/4 v0, 0x1

    if-eq p0, v0, :cond_2

    const/4 v0, 0x2

    if-eq p0, v0, :cond_1

    const/4 v0, 0x3

    if-eq p0, v0, :cond_0

    const/4 p0, 0x0

    return-object p0

    :cond_0
    sget-object p0, Lcom/czhj/wire/protobuf/FileOptions$OptimizeMode;->LITE_RUNTIME:Lcom/czhj/wire/protobuf/FileOptions$OptimizeMode;

    return-object p0

    :cond_1
    sget-object p0, Lcom/czhj/wire/protobuf/FileOptions$OptimizeMode;->CODE_SIZE:Lcom/czhj/wire/protobuf/FileOptions$OptimizeMode;

    return-object p0

    :cond_2
    sget-object p0, Lcom/czhj/wire/protobuf/FileOptions$OptimizeMode;->SPEED:Lcom/czhj/wire/protobuf/FileOptions$OptimizeMode;

    return-object p0
.end method

.method public static valueOf(Ljava/lang/String;)Lcom/czhj/wire/protobuf/FileOptions$OptimizeMode;
    .locals 1

    const-class v0, Lcom/czhj/wire/protobuf/FileOptions$OptimizeMode;

    invoke-static {v0, p0}, Ljava/lang/Enum;->valueOf(Ljava/lang/Class;Ljava/lang/String;)Ljava/lang/Enum;

    move-result-object p0

    check-cast p0, Lcom/czhj/wire/protobuf/FileOptions$OptimizeMode;

    return-object p0
.end method

.method public static values()[Lcom/czhj/wire/protobuf/FileOptions$OptimizeMode;
    .locals 1

    sget-object v0, Lcom/czhj/wire/protobuf/FileOptions$OptimizeMode;->$VALUES:[Lcom/czhj/wire/protobuf/FileOptions$OptimizeMode;

    invoke-virtual {v0}, [Lcom/czhj/wire/protobuf/FileOptions$OptimizeMode;->clone()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, [Lcom/czhj/wire/protobuf/FileOptions$OptimizeMode;

    return-object v0
.end method


# virtual methods
.method public getValue()I
    .locals 1

    iget v0, p0, Lcom/czhj/wire/protobuf/FileOptions$OptimizeMode;->value:I

    return v0
.end method
