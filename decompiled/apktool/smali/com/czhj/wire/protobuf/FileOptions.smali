.class public final Lcom/czhj/wire/protobuf/FileOptions;
.super Lcom/czhj/wire/Message;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/czhj/wire/protobuf/FileOptions$ProtoAdapter_FileOptions;,
        Lcom/czhj/wire/protobuf/FileOptions$OptimizeMode;,
        Lcom/czhj/wire/protobuf/FileOptions$Builder;
    }
.end annotation

.annotation system Ldalvik/annotation/Signature;
    value = {
        "Lcom/czhj/wire/Message<",
        "Lcom/czhj/wire/protobuf/FileOptions;",
        "Lcom/czhj/wire/protobuf/FileOptions$Builder;",
        ">;"
    }
.end annotation


# static fields
.field public static final ADAPTER:Lcom/czhj/wire/ProtoAdapter;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Lcom/czhj/wire/ProtoAdapter<",
            "Lcom/czhj/wire/protobuf/FileOptions;",
            ">;"
        }
    .end annotation
.end field

.field public static final DEFAULT_CC_ENABLE_ARENAS:Ljava/lang/Boolean;

.field public static final DEFAULT_CC_GENERIC_SERVICES:Ljava/lang/Boolean;

.field public static final DEFAULT_CSHARP_NAMESPACE:Ljava/lang/String; = ""

.field public static final DEFAULT_DEPRECATED:Ljava/lang/Boolean;

.field public static final DEFAULT_GO_PACKAGE:Ljava/lang/String; = ""

.field public static final DEFAULT_JAVA_GENERATE_EQUALS_AND_HASH:Ljava/lang/Boolean;

.field public static final DEFAULT_JAVA_GENERIC_SERVICES:Ljava/lang/Boolean;

.field public static final DEFAULT_JAVA_MULTIPLE_FILES:Ljava/lang/Boolean;

.field public static final DEFAULT_JAVA_OUTER_CLASSNAME:Ljava/lang/String; = ""

.field public static final DEFAULT_JAVA_PACKAGE:Ljava/lang/String; = ""

.field public static final DEFAULT_JAVA_STRING_CHECK_UTF8:Ljava/lang/Boolean;

.field public static final DEFAULT_OBJC_CLASS_PREFIX:Ljava/lang/String; = ""

.field public static final DEFAULT_OPTIMIZE_FOR:Lcom/czhj/wire/protobuf/FileOptions$OptimizeMode;

.field public static final DEFAULT_PY_GENERIC_SERVICES:Ljava/lang/Boolean;

.field private static final serialVersionUID:J


# instance fields
.field public final cc_enable_arenas:Ljava/lang/Boolean;
    .annotation runtime Lcom/czhj/wire/WireField;
        adapter = "com.squareup.wire.ProtoAdapter#BOOL"
        tag = 0x1f
    .end annotation
.end field

.field public final cc_generic_services:Ljava/lang/Boolean;
    .annotation runtime Lcom/czhj/wire/WireField;
        adapter = "com.squareup.wire.ProtoAdapter#BOOL"
        tag = 0x10
    .end annotation
.end field

.field public final csharp_namespace:Ljava/lang/String;
    .annotation runtime Lcom/czhj/wire/WireField;
        adapter = "com.squareup.wire.ProtoAdapter#STRING"
        tag = 0x25
    .end annotation
.end field

.field public final deprecated:Ljava/lang/Boolean;
    .annotation runtime Lcom/czhj/wire/WireField;
        adapter = "com.squareup.wire.ProtoAdapter#BOOL"
        tag = 0x17
    .end annotation
.end field

.field public final go_package:Ljava/lang/String;
    .annotation runtime Lcom/czhj/wire/WireField;
        adapter = "com.squareup.wire.ProtoAdapter#STRING"
        tag = 0xb
    .end annotation
.end field

.field public final java_generate_equals_and_hash:Ljava/lang/Boolean;
    .annotation runtime Lcom/czhj/wire/WireField;
        adapter = "com.squareup.wire.ProtoAdapter#BOOL"
        tag = 0x14
    .end annotation
.end field

.field public final java_generic_services:Ljava/lang/Boolean;
    .annotation runtime Lcom/czhj/wire/WireField;
        adapter = "com.squareup.wire.ProtoAdapter#BOOL"
        tag = 0x11
    .end annotation
.end field

.field public final java_multiple_files:Ljava/lang/Boolean;
    .annotation runtime Lcom/czhj/wire/WireField;
        adapter = "com.squareup.wire.ProtoAdapter#BOOL"
        tag = 0xa
    .end annotation
.end field

.field public final java_outer_classname:Ljava/lang/String;
    .annotation runtime Lcom/czhj/wire/WireField;
        adapter = "com.squareup.wire.ProtoAdapter#STRING"
        tag = 0x8
    .end annotation
.end field

.field public final java_package:Ljava/lang/String;
    .annotation runtime Lcom/czhj/wire/WireField;
        adapter = "com.squareup.wire.ProtoAdapter#STRING"
        tag = 0x1
    .end annotation
.end field

.field public final java_string_check_utf8:Ljava/lang/Boolean;
    .annotation runtime Lcom/czhj/wire/WireField;
        adapter = "com.squareup.wire.ProtoAdapter#BOOL"
        tag = 0x1b
    .end annotation
.end field

.field public final objc_class_prefix:Ljava/lang/String;
    .annotation runtime Lcom/czhj/wire/WireField;
        adapter = "com.squareup.wire.ProtoAdapter#STRING"
        tag = 0x24
    .end annotation
.end field

.field public final optimize_for:Lcom/czhj/wire/protobuf/FileOptions$OptimizeMode;
    .annotation runtime Lcom/czhj/wire/WireField;
        adapter = "com.google.protobuf.FileOptions$OptimizeMode#ADAPTER"
        tag = 0x9
    .end annotation
.end field

.field public final py_generic_services:Ljava/lang/Boolean;
    .annotation runtime Lcom/czhj/wire/WireField;
        adapter = "com.squareup.wire.ProtoAdapter#BOOL"
        tag = 0x12
    .end annotation
.end field

.field public final uninterpreted_option:Ljava/util/List;
    .annotation runtime Lcom/czhj/wire/WireField;
        adapter = "com.google.protobuf.UninterpretedOption#ADAPTER"
        label = .enum Lcom/czhj/wire/WireField$Label;->REPEATED:Lcom/czhj/wire/WireField$Label;
        tag = 0x3e7
    .end annotation

    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Lcom/czhj/wire/protobuf/UninterpretedOption;",
            ">;"
        }
    .end annotation
.end field


# direct methods
.method static constructor <clinit>()V
    .locals 2

    new-instance v0, Lcom/czhj/wire/protobuf/FileOptions$ProtoAdapter_FileOptions;

    invoke-direct {v0}, Lcom/czhj/wire/protobuf/FileOptions$ProtoAdapter_FileOptions;-><init>()V

    sput-object v0, Lcom/czhj/wire/protobuf/FileOptions;->ADAPTER:Lcom/czhj/wire/ProtoAdapter;

    const/4 v0, 0x0

    invoke-static {v0}, Ljava/lang/Boolean;->valueOf(Z)Ljava/lang/Boolean;

    move-result-object v0

    sput-object v0, Lcom/czhj/wire/protobuf/FileOptions;->DEFAULT_JAVA_MULTIPLE_FILES:Ljava/lang/Boolean;

    sput-object v0, Lcom/czhj/wire/protobuf/FileOptions;->DEFAULT_JAVA_GENERATE_EQUALS_AND_HASH:Ljava/lang/Boolean;

    sput-object v0, Lcom/czhj/wire/protobuf/FileOptions;->DEFAULT_JAVA_STRING_CHECK_UTF8:Ljava/lang/Boolean;

    sget-object v1, Lcom/czhj/wire/protobuf/FileOptions$OptimizeMode;->SPEED:Lcom/czhj/wire/protobuf/FileOptions$OptimizeMode;

    sput-object v1, Lcom/czhj/wire/protobuf/FileOptions;->DEFAULT_OPTIMIZE_FOR:Lcom/czhj/wire/protobuf/FileOptions$OptimizeMode;

    sput-object v0, Lcom/czhj/wire/protobuf/FileOptions;->DEFAULT_CC_GENERIC_SERVICES:Ljava/lang/Boolean;

    sput-object v0, Lcom/czhj/wire/protobuf/FileOptions;->DEFAULT_JAVA_GENERIC_SERVICES:Ljava/lang/Boolean;

    sput-object v0, Lcom/czhj/wire/protobuf/FileOptions;->DEFAULT_PY_GENERIC_SERVICES:Ljava/lang/Boolean;

    sput-object v0, Lcom/czhj/wire/protobuf/FileOptions;->DEFAULT_DEPRECATED:Ljava/lang/Boolean;

    sput-object v0, Lcom/czhj/wire/protobuf/FileOptions;->DEFAULT_CC_ENABLE_ARENAS:Ljava/lang/Boolean;

    return-void
.end method

.method public constructor <init>(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Boolean;Ljava/lang/Boolean;Ljava/lang/Boolean;Lcom/czhj/wire/protobuf/FileOptions$OptimizeMode;Ljava/lang/String;Ljava/lang/Boolean;Ljava/lang/Boolean;Ljava/lang/Boolean;Ljava/lang/Boolean;Ljava/lang/Boolean;Ljava/lang/String;Ljava/lang/String;Ljava/util/List;)V
    .locals 17
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            "Ljava/lang/Boolean;",
            "Ljava/lang/Boolean;",
            "Ljava/lang/Boolean;",
            "Lcom/czhj/wire/protobuf/FileOptions$OptimizeMode;",
            "Ljava/lang/String;",
            "Ljava/lang/Boolean;",
            "Ljava/lang/Boolean;",
            "Ljava/lang/Boolean;",
            "Ljava/lang/Boolean;",
            "Ljava/lang/Boolean;",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            "Ljava/util/List<",
            "Lcom/czhj/wire/protobuf/UninterpretedOption;",
            ">;)V"
        }
    .end annotation

    move-object/from16 v0, p0

    move-object/from16 v1, p1

    move-object/from16 v2, p2

    move-object/from16 v3, p3

    move-object/from16 v4, p4

    move-object/from16 v5, p5

    move-object/from16 v6, p6

    move-object/from16 v7, p7

    move-object/from16 v8, p8

    move-object/from16 v9, p9

    move-object/from16 v10, p10

    move-object/from16 v11, p11

    move-object/from16 v12, p12

    move-object/from16 v13, p13

    move-object/from16 v14, p14

    move-object/from16 v15, p15

    sget-object v16, Lcom/czhj/wire/okio/ByteString;->EMPTY:Lcom/czhj/wire/okio/ByteString;

    invoke-direct/range {v0 .. v16}, Lcom/czhj/wire/protobuf/FileOptions;-><init>(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Boolean;Ljava/lang/Boolean;Ljava/lang/Boolean;Lcom/czhj/wire/protobuf/FileOptions$OptimizeMode;Ljava/lang/String;Ljava/lang/Boolean;Ljava/lang/Boolean;Ljava/lang/Boolean;Ljava/lang/Boolean;Ljava/lang/Boolean;Ljava/lang/String;Ljava/lang/String;Ljava/util/List;Lcom/czhj/wire/okio/ByteString;)V

    return-void
.end method

.method public constructor <init>(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Boolean;Ljava/lang/Boolean;Ljava/lang/Boolean;Lcom/czhj/wire/protobuf/FileOptions$OptimizeMode;Ljava/lang/String;Ljava/lang/Boolean;Ljava/lang/Boolean;Ljava/lang/Boolean;Ljava/lang/Boolean;Ljava/lang/Boolean;Ljava/lang/String;Ljava/lang/String;Ljava/util/List;Lcom/czhj/wire/okio/ByteString;)V
    .locals 3
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            "Ljava/lang/Boolean;",
            "Ljava/lang/Boolean;",
            "Ljava/lang/Boolean;",
            "Lcom/czhj/wire/protobuf/FileOptions$OptimizeMode;",
            "Ljava/lang/String;",
            "Ljava/lang/Boolean;",
            "Ljava/lang/Boolean;",
            "Ljava/lang/Boolean;",
            "Ljava/lang/Boolean;",
            "Ljava/lang/Boolean;",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            "Ljava/util/List<",
            "Lcom/czhj/wire/protobuf/UninterpretedOption;",
            ">;",
            "Lcom/czhj/wire/okio/ByteString;",
            ")V"
        }
    .end annotation

    move-object v0, p0

    sget-object v1, Lcom/czhj/wire/protobuf/FileOptions;->ADAPTER:Lcom/czhj/wire/ProtoAdapter;

    move-object/from16 v2, p16

    invoke-direct {p0, v1, v2}, Lcom/czhj/wire/Message;-><init>(Lcom/czhj/wire/ProtoAdapter;Lcom/czhj/wire/okio/ByteString;)V

    move-object v1, p1

    iput-object v1, v0, Lcom/czhj/wire/protobuf/FileOptions;->java_package:Ljava/lang/String;

    move-object v1, p2

    iput-object v1, v0, Lcom/czhj/wire/protobuf/FileOptions;->java_outer_classname:Ljava/lang/String;

    move-object v1, p3

    iput-object v1, v0, Lcom/czhj/wire/protobuf/FileOptions;->java_multiple_files:Ljava/lang/Boolean;

    move-object v1, p4

    iput-object v1, v0, Lcom/czhj/wire/protobuf/FileOptions;->java_generate_equals_and_hash:Ljava/lang/Boolean;

    move-object v1, p5

    iput-object v1, v0, Lcom/czhj/wire/protobuf/FileOptions;->java_string_check_utf8:Ljava/lang/Boolean;

    move-object v1, p6

    iput-object v1, v0, Lcom/czhj/wire/protobuf/FileOptions;->optimize_for:Lcom/czhj/wire/protobuf/FileOptions$OptimizeMode;

    move-object v1, p7

    iput-object v1, v0, Lcom/czhj/wire/protobuf/FileOptions;->go_package:Ljava/lang/String;

    move-object v1, p8

    iput-object v1, v0, Lcom/czhj/wire/protobuf/FileOptions;->cc_generic_services:Ljava/lang/Boolean;

    move-object v1, p9

    iput-object v1, v0, Lcom/czhj/wire/protobuf/FileOptions;->java_generic_services:Ljava/lang/Boolean;

    move-object v1, p10

    iput-object v1, v0, Lcom/czhj/wire/protobuf/FileOptions;->py_generic_services:Ljava/lang/Boolean;

    move-object v1, p11

    iput-object v1, v0, Lcom/czhj/wire/protobuf/FileOptions;->deprecated:Ljava/lang/Boolean;

    move-object v1, p12

    iput-object v1, v0, Lcom/czhj/wire/protobuf/FileOptions;->cc_enable_arenas:Ljava/lang/Boolean;

    move-object/from16 v1, p13

    iput-object v1, v0, Lcom/czhj/wire/protobuf/FileOptions;->objc_class_prefix:Ljava/lang/String;

    move-object/from16 v1, p14

    iput-object v1, v0, Lcom/czhj/wire/protobuf/FileOptions;->csharp_namespace:Ljava/lang/String;

    const-string v1, "uninterpreted_option"

    move-object/from16 v2, p15

    invoke-static {v1, v2}, Lcom/czhj/wire/internal/Internal;->immutableCopyOf(Ljava/lang/String;Ljava/util/List;)Ljava/util/List;

    move-result-object v1

    iput-object v1, v0, Lcom/czhj/wire/protobuf/FileOptions;->uninterpreted_option:Ljava/util/List;

    return-void
.end method


# virtual methods
.method public equals(Ljava/lang/Object;)Z
    .locals 4

    const/4 v0, 0x1

    if-ne p1, p0, :cond_0

    return v0

    :cond_0
    instance-of v1, p1, Lcom/czhj/wire/protobuf/FileOptions;

    const/4 v2, 0x0

    if-nez v1, :cond_1

    return v2

    :cond_1
    check-cast p1, Lcom/czhj/wire/protobuf/FileOptions;

    invoke-virtual {p0}, Lcom/czhj/wire/protobuf/FileOptions;->unknownFields()Lcom/czhj/wire/okio/ByteString;

    move-result-object v1

    invoke-virtual {p1}, Lcom/czhj/wire/protobuf/FileOptions;->unknownFields()Lcom/czhj/wire/okio/ByteString;

    move-result-object v3

    invoke-virtual {v1, v3}, Lcom/czhj/wire/okio/ByteString;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2

    iget-object v1, p0, Lcom/czhj/wire/protobuf/FileOptions;->java_package:Ljava/lang/String;

    iget-object v3, p1, Lcom/czhj/wire/protobuf/FileOptions;->java_package:Ljava/lang/String;

    invoke-static {v1, v3}, Lcom/czhj/wire/internal/Internal;->equals(Ljava/lang/Object;Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2

    iget-object v1, p0, Lcom/czhj/wire/protobuf/FileOptions;->java_outer_classname:Ljava/lang/String;

    iget-object v3, p1, Lcom/czhj/wire/protobuf/FileOptions;->java_outer_classname:Ljava/lang/String;

    invoke-static {v1, v3}, Lcom/czhj/wire/internal/Internal;->equals(Ljava/lang/Object;Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2

    iget-object v1, p0, Lcom/czhj/wire/protobuf/FileOptions;->java_multiple_files:Ljava/lang/Boolean;

    iget-object v3, p1, Lcom/czhj/wire/protobuf/FileOptions;->java_multiple_files:Ljava/lang/Boolean;

    invoke-static {v1, v3}, Lcom/czhj/wire/internal/Internal;->equals(Ljava/lang/Object;Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2

    iget-object v1, p0, Lcom/czhj/wire/protobuf/FileOptions;->java_generate_equals_and_hash:Ljava/lang/Boolean;

    iget-object v3, p1, Lcom/czhj/wire/protobuf/FileOptions;->java_generate_equals_and_hash:Ljava/lang/Boolean;

    invoke-static {v1, v3}, Lcom/czhj/wire/internal/Internal;->equals(Ljava/lang/Object;Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2

    iget-object v1, p0, Lcom/czhj/wire/protobuf/FileOptions;->java_string_check_utf8:Ljava/lang/Boolean;

    iget-object v3, p1, Lcom/czhj/wire/protobuf/FileOptions;->java_string_check_utf8:Ljava/lang/Boolean;

    invoke-static {v1, v3}, Lcom/czhj/wire/internal/Internal;->equals(Ljava/lang/Object;Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2

    iget-object v1, p0, Lcom/czhj/wire/protobuf/FileOptions;->optimize_for:Lcom/czhj/wire/protobuf/FileOptions$OptimizeMode;

    iget-object v3, p1, Lcom/czhj/wire/protobuf/FileOptions;->optimize_for:Lcom/czhj/wire/protobuf/FileOptions$OptimizeMode;

    invoke-static {v1, v3}, Lcom/czhj/wire/internal/Internal;->equals(Ljava/lang/Object;Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2

    iget-object v1, p0, Lcom/czhj/wire/protobuf/FileOptions;->go_package:Ljava/lang/String;

    iget-object v3, p1, Lcom/czhj/wire/protobuf/FileOptions;->go_package:Ljava/lang/String;

    invoke-static {v1, v3}, Lcom/czhj/wire/internal/Internal;->equals(Ljava/lang/Object;Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2

    iget-object v1, p0, Lcom/czhj/wire/protobuf/FileOptions;->cc_generic_services:Ljava/lang/Boolean;

    iget-object v3, p1, Lcom/czhj/wire/protobuf/FileOptions;->cc_generic_services:Ljava/lang/Boolean;

    invoke-static {v1, v3}, Lcom/czhj/wire/internal/Internal;->equals(Ljava/lang/Object;Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2

    iget-object v1, p0, Lcom/czhj/wire/protobuf/FileOptions;->java_generic_services:Ljava/lang/Boolean;

    iget-object v3, p1, Lcom/czhj/wire/protobuf/FileOptions;->java_generic_services:Ljava/lang/Boolean;

    invoke-static {v1, v3}, Lcom/czhj/wire/internal/Internal;->equals(Ljava/lang/Object;Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2

    iget-object v1, p0, Lcom/czhj/wire/protobuf/FileOptions;->py_generic_services:Ljava/lang/Boolean;

    iget-object v3, p1, Lcom/czhj/wire/protobuf/FileOptions;->py_generic_services:Ljava/lang/Boolean;

    invoke-static {v1, v3}, Lcom/czhj/wire/internal/Internal;->equals(Ljava/lang/Object;Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2

    iget-object v1, p0, Lcom/czhj/wire/protobuf/FileOptions;->deprecated:Ljava/lang/Boolean;

    iget-object v3, p1, Lcom/czhj/wire/protobuf/FileOptions;->deprecated:Ljava/lang/Boolean;

    invoke-static {v1, v3}, Lcom/czhj/wire/internal/Internal;->equals(Ljava/lang/Object;Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2

    iget-object v1, p0, Lcom/czhj/wire/protobuf/FileOptions;->cc_enable_arenas:Ljava/lang/Boolean;

    iget-object v3, p1, Lcom/czhj/wire/protobuf/FileOptions;->cc_enable_arenas:Ljava/lang/Boolean;

    invoke-static {v1, v3}, Lcom/czhj/wire/internal/Internal;->equals(Ljava/lang/Object;Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2

    iget-object v1, p0, Lcom/czhj/wire/protobuf/FileOptions;->objc_class_prefix:Ljava/lang/String;

    iget-object v3, p1, Lcom/czhj/wire/protobuf/FileOptions;->objc_class_prefix:Ljava/lang/String;

    invoke-static {v1, v3}, Lcom/czhj/wire/internal/Internal;->equals(Ljava/lang/Object;Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2

    iget-object v1, p0, Lcom/czhj/wire/protobuf/FileOptions;->csharp_namespace:Ljava/lang/String;

    iget-object v3, p1, Lcom/czhj/wire/protobuf/FileOptions;->csharp_namespace:Ljava/lang/String;

    invoke-static {v1, v3}, Lcom/czhj/wire/internal/Internal;->equals(Ljava/lang/Object;Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2

    iget-object v1, p0, Lcom/czhj/wire/protobuf/FileOptions;->uninterpreted_option:Ljava/util/List;

    iget-object p1, p1, Lcom/czhj/wire/protobuf/FileOptions;->uninterpreted_option:Ljava/util/List;

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

    if-nez v0, :cond_e

    invoke-virtual {p0}, Lcom/czhj/wire/protobuf/FileOptions;->unknownFields()Lcom/czhj/wire/okio/ByteString;

    move-result-object v0

    invoke-virtual {v0}, Lcom/czhj/wire/okio/ByteString;->hashCode()I

    move-result v0

    mul-int/lit8 v0, v0, 0x25

    iget-object v1, p0, Lcom/czhj/wire/protobuf/FileOptions;->java_package:Ljava/lang/String;

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

    iget-object v1, p0, Lcom/czhj/wire/protobuf/FileOptions;->java_outer_classname:Ljava/lang/String;

    if-eqz v1, :cond_1

    invoke-virtual {v1}, Ljava/lang/String;->hashCode()I

    move-result v1

    goto :goto_1

    :cond_1
    move v1, v2

    :goto_1
    add-int/2addr v0, v1

    mul-int/lit8 v0, v0, 0x25

    iget-object v1, p0, Lcom/czhj/wire/protobuf/FileOptions;->java_multiple_files:Ljava/lang/Boolean;

    if-eqz v1, :cond_2

    invoke-virtual {v1}, Ljava/lang/Boolean;->hashCode()I

    move-result v1

    goto :goto_2

    :cond_2
    move v1, v2

    :goto_2
    add-int/2addr v0, v1

    mul-int/lit8 v0, v0, 0x25

    iget-object v1, p0, Lcom/czhj/wire/protobuf/FileOptions;->java_generate_equals_and_hash:Ljava/lang/Boolean;

    if-eqz v1, :cond_3

    invoke-virtual {v1}, Ljava/lang/Boolean;->hashCode()I

    move-result v1

    goto :goto_3

    :cond_3
    move v1, v2

    :goto_3
    add-int/2addr v0, v1

    mul-int/lit8 v0, v0, 0x25

    iget-object v1, p0, Lcom/czhj/wire/protobuf/FileOptions;->java_string_check_utf8:Ljava/lang/Boolean;

    if-eqz v1, :cond_4

    invoke-virtual {v1}, Ljava/lang/Boolean;->hashCode()I

    move-result v1

    goto :goto_4

    :cond_4
    move v1, v2

    :goto_4
    add-int/2addr v0, v1

    mul-int/lit8 v0, v0, 0x25

    iget-object v1, p0, Lcom/czhj/wire/protobuf/FileOptions;->optimize_for:Lcom/czhj/wire/protobuf/FileOptions$OptimizeMode;

    if-eqz v1, :cond_5

    invoke-virtual {v1}, Lcom/czhj/wire/protobuf/FileOptions$OptimizeMode;->hashCode()I

    move-result v1

    goto :goto_5

    :cond_5
    move v1, v2

    :goto_5
    add-int/2addr v0, v1

    mul-int/lit8 v0, v0, 0x25

    iget-object v1, p0, Lcom/czhj/wire/protobuf/FileOptions;->go_package:Ljava/lang/String;

    if-eqz v1, :cond_6

    invoke-virtual {v1}, Ljava/lang/String;->hashCode()I

    move-result v1

    goto :goto_6

    :cond_6
    move v1, v2

    :goto_6
    add-int/2addr v0, v1

    mul-int/lit8 v0, v0, 0x25

    iget-object v1, p0, Lcom/czhj/wire/protobuf/FileOptions;->cc_generic_services:Ljava/lang/Boolean;

    if-eqz v1, :cond_7

    invoke-virtual {v1}, Ljava/lang/Boolean;->hashCode()I

    move-result v1

    goto :goto_7

    :cond_7
    move v1, v2

    :goto_7
    add-int/2addr v0, v1

    mul-int/lit8 v0, v0, 0x25

    iget-object v1, p0, Lcom/czhj/wire/protobuf/FileOptions;->java_generic_services:Ljava/lang/Boolean;

    if-eqz v1, :cond_8

    invoke-virtual {v1}, Ljava/lang/Boolean;->hashCode()I

    move-result v1

    goto :goto_8

    :cond_8
    move v1, v2

    :goto_8
    add-int/2addr v0, v1

    mul-int/lit8 v0, v0, 0x25

    iget-object v1, p0, Lcom/czhj/wire/protobuf/FileOptions;->py_generic_services:Ljava/lang/Boolean;

    if-eqz v1, :cond_9

    invoke-virtual {v1}, Ljava/lang/Boolean;->hashCode()I

    move-result v1

    goto :goto_9

    :cond_9
    move v1, v2

    :goto_9
    add-int/2addr v0, v1

    mul-int/lit8 v0, v0, 0x25

    iget-object v1, p0, Lcom/czhj/wire/protobuf/FileOptions;->deprecated:Ljava/lang/Boolean;

    if-eqz v1, :cond_a

    invoke-virtual {v1}, Ljava/lang/Boolean;->hashCode()I

    move-result v1

    goto :goto_a

    :cond_a
    move v1, v2

    :goto_a
    add-int/2addr v0, v1

    mul-int/lit8 v0, v0, 0x25

    iget-object v1, p0, Lcom/czhj/wire/protobuf/FileOptions;->cc_enable_arenas:Ljava/lang/Boolean;

    if-eqz v1, :cond_b

    invoke-virtual {v1}, Ljava/lang/Boolean;->hashCode()I

    move-result v1

    goto :goto_b

    :cond_b
    move v1, v2

    :goto_b
    add-int/2addr v0, v1

    mul-int/lit8 v0, v0, 0x25

    iget-object v1, p0, Lcom/czhj/wire/protobuf/FileOptions;->objc_class_prefix:Ljava/lang/String;

    if-eqz v1, :cond_c

    invoke-virtual {v1}, Ljava/lang/String;->hashCode()I

    move-result v1

    goto :goto_c

    :cond_c
    move v1, v2

    :goto_c
    add-int/2addr v0, v1

    mul-int/lit8 v0, v0, 0x25

    iget-object v1, p0, Lcom/czhj/wire/protobuf/FileOptions;->csharp_namespace:Ljava/lang/String;

    if-eqz v1, :cond_d

    invoke-virtual {v1}, Ljava/lang/String;->hashCode()I

    move-result v2

    :cond_d
    add-int/2addr v0, v2

    mul-int/lit8 v0, v0, 0x25

    iget-object v1, p0, Lcom/czhj/wire/protobuf/FileOptions;->uninterpreted_option:Ljava/util/List;

    invoke-interface {v1}, Ljava/util/List;->hashCode()I

    move-result v1

    add-int/2addr v0, v1

    iput v0, p0, Lcom/czhj/wire/Message;->hashCode:I

    :cond_e
    return v0
.end method

.method public bridge synthetic newBuilder()Lcom/czhj/wire/Message$Builder;
    .locals 1

    invoke-virtual {p0}, Lcom/czhj/wire/protobuf/FileOptions;->newBuilder()Lcom/czhj/wire/protobuf/FileOptions$Builder;

    move-result-object v0

    return-object v0
.end method

.method public newBuilder()Lcom/czhj/wire/protobuf/FileOptions$Builder;
    .locals 3

    new-instance v0, Lcom/czhj/wire/protobuf/FileOptions$Builder;

    invoke-direct {v0}, Lcom/czhj/wire/protobuf/FileOptions$Builder;-><init>()V

    iget-object v1, p0, Lcom/czhj/wire/protobuf/FileOptions;->java_package:Ljava/lang/String;

    iput-object v1, v0, Lcom/czhj/wire/protobuf/FileOptions$Builder;->java_package:Ljava/lang/String;

    iget-object v1, p0, Lcom/czhj/wire/protobuf/FileOptions;->java_outer_classname:Ljava/lang/String;

    iput-object v1, v0, Lcom/czhj/wire/protobuf/FileOptions$Builder;->java_outer_classname:Ljava/lang/String;

    iget-object v1, p0, Lcom/czhj/wire/protobuf/FileOptions;->java_multiple_files:Ljava/lang/Boolean;

    iput-object v1, v0, Lcom/czhj/wire/protobuf/FileOptions$Builder;->java_multiple_files:Ljava/lang/Boolean;

    iget-object v1, p0, Lcom/czhj/wire/protobuf/FileOptions;->java_generate_equals_and_hash:Ljava/lang/Boolean;

    iput-object v1, v0, Lcom/czhj/wire/protobuf/FileOptions$Builder;->java_generate_equals_and_hash:Ljava/lang/Boolean;

    iget-object v1, p0, Lcom/czhj/wire/protobuf/FileOptions;->java_string_check_utf8:Ljava/lang/Boolean;

    iput-object v1, v0, Lcom/czhj/wire/protobuf/FileOptions$Builder;->java_string_check_utf8:Ljava/lang/Boolean;

    iget-object v1, p0, Lcom/czhj/wire/protobuf/FileOptions;->optimize_for:Lcom/czhj/wire/protobuf/FileOptions$OptimizeMode;

    iput-object v1, v0, Lcom/czhj/wire/protobuf/FileOptions$Builder;->optimize_for:Lcom/czhj/wire/protobuf/FileOptions$OptimizeMode;

    iget-object v1, p0, Lcom/czhj/wire/protobuf/FileOptions;->go_package:Ljava/lang/String;

    iput-object v1, v0, Lcom/czhj/wire/protobuf/FileOptions$Builder;->go_package:Ljava/lang/String;

    iget-object v1, p0, Lcom/czhj/wire/protobuf/FileOptions;->cc_generic_services:Ljava/lang/Boolean;

    iput-object v1, v0, Lcom/czhj/wire/protobuf/FileOptions$Builder;->cc_generic_services:Ljava/lang/Boolean;

    iget-object v1, p0, Lcom/czhj/wire/protobuf/FileOptions;->java_generic_services:Ljava/lang/Boolean;

    iput-object v1, v0, Lcom/czhj/wire/protobuf/FileOptions$Builder;->java_generic_services:Ljava/lang/Boolean;

    iget-object v1, p0, Lcom/czhj/wire/protobuf/FileOptions;->py_generic_services:Ljava/lang/Boolean;

    iput-object v1, v0, Lcom/czhj/wire/protobuf/FileOptions$Builder;->py_generic_services:Ljava/lang/Boolean;

    iget-object v1, p0, Lcom/czhj/wire/protobuf/FileOptions;->deprecated:Ljava/lang/Boolean;

    iput-object v1, v0, Lcom/czhj/wire/protobuf/FileOptions$Builder;->deprecated:Ljava/lang/Boolean;

    iget-object v1, p0, Lcom/czhj/wire/protobuf/FileOptions;->cc_enable_arenas:Ljava/lang/Boolean;

    iput-object v1, v0, Lcom/czhj/wire/protobuf/FileOptions$Builder;->cc_enable_arenas:Ljava/lang/Boolean;

    iget-object v1, p0, Lcom/czhj/wire/protobuf/FileOptions;->objc_class_prefix:Ljava/lang/String;

    iput-object v1, v0, Lcom/czhj/wire/protobuf/FileOptions$Builder;->objc_class_prefix:Ljava/lang/String;

    iget-object v1, p0, Lcom/czhj/wire/protobuf/FileOptions;->csharp_namespace:Ljava/lang/String;

    iput-object v1, v0, Lcom/czhj/wire/protobuf/FileOptions$Builder;->csharp_namespace:Ljava/lang/String;

    iget-object v1, p0, Lcom/czhj/wire/protobuf/FileOptions;->uninterpreted_option:Ljava/util/List;

    const-string v2, "uninterpreted_option"

    invoke-static {v2, v1}, Lcom/czhj/wire/internal/Internal;->copyOf(Ljava/lang/String;Ljava/util/List;)Ljava/util/List;

    move-result-object v1

    iput-object v1, v0, Lcom/czhj/wire/protobuf/FileOptions$Builder;->uninterpreted_option:Ljava/util/List;

    invoke-virtual {p0}, Lcom/czhj/wire/protobuf/FileOptions;->unknownFields()Lcom/czhj/wire/okio/ByteString;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/czhj/wire/protobuf/FileOptions$Builder;->addUnknownFields(Lcom/czhj/wire/okio/ByteString;)Lcom/czhj/wire/Message$Builder;

    return-object v0
.end method

.method public toString()Ljava/lang/String;
    .locals 4

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v1, p0, Lcom/czhj/wire/protobuf/FileOptions;->java_package:Ljava/lang/String;

    if-eqz v1, :cond_0

    const-string v1, ", java_package="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/czhj/wire/protobuf/FileOptions;->java_package:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    :cond_0
    iget-object v1, p0, Lcom/czhj/wire/protobuf/FileOptions;->java_outer_classname:Ljava/lang/String;

    if-eqz v1, :cond_1

    const-string v1, ", java_outer_classname="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/czhj/wire/protobuf/FileOptions;->java_outer_classname:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    :cond_1
    iget-object v1, p0, Lcom/czhj/wire/protobuf/FileOptions;->java_multiple_files:Ljava/lang/Boolean;

    if-eqz v1, :cond_2

    const-string v1, ", java_multiple_files="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/czhj/wire/protobuf/FileOptions;->java_multiple_files:Ljava/lang/Boolean;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    :cond_2
    iget-object v1, p0, Lcom/czhj/wire/protobuf/FileOptions;->java_generate_equals_and_hash:Ljava/lang/Boolean;

    if-eqz v1, :cond_3

    const-string v1, ", java_generate_equals_and_hash="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/czhj/wire/protobuf/FileOptions;->java_generate_equals_and_hash:Ljava/lang/Boolean;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    :cond_3
    iget-object v1, p0, Lcom/czhj/wire/protobuf/FileOptions;->java_string_check_utf8:Ljava/lang/Boolean;

    if-eqz v1, :cond_4

    const-string v1, ", java_string_check_utf8="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/czhj/wire/protobuf/FileOptions;->java_string_check_utf8:Ljava/lang/Boolean;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    :cond_4
    iget-object v1, p0, Lcom/czhj/wire/protobuf/FileOptions;->optimize_for:Lcom/czhj/wire/protobuf/FileOptions$OptimizeMode;

    if-eqz v1, :cond_5

    const-string v1, ", optimize_for="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/czhj/wire/protobuf/FileOptions;->optimize_for:Lcom/czhj/wire/protobuf/FileOptions$OptimizeMode;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    :cond_5
    iget-object v1, p0, Lcom/czhj/wire/protobuf/FileOptions;->go_package:Ljava/lang/String;

    if-eqz v1, :cond_6

    const-string v1, ", go_package="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/czhj/wire/protobuf/FileOptions;->go_package:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    :cond_6
    iget-object v1, p0, Lcom/czhj/wire/protobuf/FileOptions;->cc_generic_services:Ljava/lang/Boolean;

    if-eqz v1, :cond_7

    const-string v1, ", cc_generic_services="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/czhj/wire/protobuf/FileOptions;->cc_generic_services:Ljava/lang/Boolean;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    :cond_7
    iget-object v1, p0, Lcom/czhj/wire/protobuf/FileOptions;->java_generic_services:Ljava/lang/Boolean;

    if-eqz v1, :cond_8

    const-string v1, ", java_generic_services="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/czhj/wire/protobuf/FileOptions;->java_generic_services:Ljava/lang/Boolean;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    :cond_8
    iget-object v1, p0, Lcom/czhj/wire/protobuf/FileOptions;->py_generic_services:Ljava/lang/Boolean;

    if-eqz v1, :cond_9

    const-string v1, ", py_generic_services="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/czhj/wire/protobuf/FileOptions;->py_generic_services:Ljava/lang/Boolean;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    :cond_9
    iget-object v1, p0, Lcom/czhj/wire/protobuf/FileOptions;->deprecated:Ljava/lang/Boolean;

    if-eqz v1, :cond_a

    const-string v1, ", deprecated="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/czhj/wire/protobuf/FileOptions;->deprecated:Ljava/lang/Boolean;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    :cond_a
    iget-object v1, p0, Lcom/czhj/wire/protobuf/FileOptions;->cc_enable_arenas:Ljava/lang/Boolean;

    if-eqz v1, :cond_b

    const-string v1, ", cc_enable_arenas="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/czhj/wire/protobuf/FileOptions;->cc_enable_arenas:Ljava/lang/Boolean;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    :cond_b
    iget-object v1, p0, Lcom/czhj/wire/protobuf/FileOptions;->objc_class_prefix:Ljava/lang/String;

    if-eqz v1, :cond_c

    const-string v1, ", objc_class_prefix="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/czhj/wire/protobuf/FileOptions;->objc_class_prefix:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    :cond_c
    iget-object v1, p0, Lcom/czhj/wire/protobuf/FileOptions;->csharp_namespace:Ljava/lang/String;

    if-eqz v1, :cond_d

    const-string v1, ", csharp_namespace="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/czhj/wire/protobuf/FileOptions;->csharp_namespace:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    :cond_d
    iget-object v1, p0, Lcom/czhj/wire/protobuf/FileOptions;->uninterpreted_option:Ljava/util/List;

    invoke-interface {v1}, Ljava/util/List;->isEmpty()Z

    move-result v1

    if-nez v1, :cond_e

    const-string v1, ", uninterpreted_option="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/czhj/wire/protobuf/FileOptions;->uninterpreted_option:Ljava/util/List;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    :cond_e
    const/4 v1, 0x0

    const/4 v2, 0x2

    const-string v3, "FileOptions{"

    invoke-virtual {v0, v1, v2, v3}, Ljava/lang/StringBuilder;->replace(IILjava/lang/String;)Ljava/lang/StringBuilder;

    move-result-object v0

    const/16 v1, 0x7d

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(C)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method
