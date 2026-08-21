.class final Lcom/czhj/wire/FieldBinding;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/Signature;
    value = {
        "<M:",
        "Lcom/czhj/wire/Message<",
        "TM;TB;>;B:",
        "Lcom/czhj/wire/Message$Builder<",
        "TM;TB;>;>",
        "Ljava/lang/Object;"
    }
.end annotation


# instance fields
.field private final a:Ljava/lang/String;

.field private final b:Ljava/lang/String;

.field private final c:Ljava/lang/reflect/Field;

.field private final d:Ljava/lang/reflect/Field;

.field private final e:Ljava/lang/reflect/Method;

.field private f:Lcom/czhj/wire/ProtoAdapter;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Lcom/czhj/wire/ProtoAdapter<",
            "*>;"
        }
    .end annotation
.end field

.field private g:Lcom/czhj/wire/ProtoAdapter;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Lcom/czhj/wire/ProtoAdapter<",
            "*>;"
        }
    .end annotation
.end field

.field private h:Lcom/czhj/wire/ProtoAdapter;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Lcom/czhj/wire/ProtoAdapter<",
            "Ljava/lang/Object;",
            ">;"
        }
    .end annotation
.end field

.field public final label:Lcom/czhj/wire/WireField$Label;

.field public final name:Ljava/lang/String;

.field public final redacted:Z

.field public final tag:I


# direct methods
.method constructor <init>(Lcom/czhj/wire/WireField;Ljava/lang/reflect/Field;Ljava/lang/Class;)V
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Lcom/czhj/wire/WireField;",
            "Ljava/lang/reflect/Field;",
            "Ljava/lang/Class<",
            "TB;>;)V"
        }
    .end annotation

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    invoke-interface {p1}, Lcom/czhj/wire/WireField;->label()Lcom/czhj/wire/WireField$Label;

    move-result-object v0

    iput-object v0, p0, Lcom/czhj/wire/FieldBinding;->label:Lcom/czhj/wire/WireField$Label;

    invoke-virtual {p2}, Ljava/lang/reflect/Field;->getName()Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/czhj/wire/FieldBinding;->name:Ljava/lang/String;

    invoke-interface {p1}, Lcom/czhj/wire/WireField;->tag()I

    move-result v0

    iput v0, p0, Lcom/czhj/wire/FieldBinding;->tag:I

    invoke-interface {p1}, Lcom/czhj/wire/WireField;->keyAdapter()Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/czhj/wire/FieldBinding;->a:Ljava/lang/String;

    invoke-interface {p1}, Lcom/czhj/wire/WireField;->adapter()Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/czhj/wire/FieldBinding;->b:Ljava/lang/String;

    invoke-interface {p1}, Lcom/czhj/wire/WireField;->redacted()Z

    move-result p1

    iput-boolean p1, p0, Lcom/czhj/wire/FieldBinding;->redacted:Z

    iput-object p2, p0, Lcom/czhj/wire/FieldBinding;->c:Ljava/lang/reflect/Field;

    iget-object p1, p0, Lcom/czhj/wire/FieldBinding;->name:Ljava/lang/String;

    invoke-static {p3, p1}, Lcom/czhj/wire/FieldBinding;->a(Ljava/lang/Class;Ljava/lang/String;)Ljava/lang/reflect/Field;

    move-result-object p1

    iput-object p1, p0, Lcom/czhj/wire/FieldBinding;->d:Ljava/lang/reflect/Field;

    iget-object p1, p0, Lcom/czhj/wire/FieldBinding;->name:Ljava/lang/String;

    invoke-virtual {p2}, Ljava/lang/reflect/Field;->getType()Ljava/lang/Class;

    move-result-object p2

    invoke-static {p3, p1, p2}, Lcom/czhj/wire/FieldBinding;->a(Ljava/lang/Class;Ljava/lang/String;Ljava/lang/Class;)Ljava/lang/reflect/Method;

    move-result-object p1

    iput-object p1, p0, Lcom/czhj/wire/FieldBinding;->e:Ljava/lang/reflect/Method;

    return-void
.end method

.method private static a(Ljava/lang/Class;Ljava/lang/String;)Ljava/lang/reflect/Field;
    .locals 3
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/lang/Class<",
            "*>;",
            "Ljava/lang/String;",
            ")",
            "Ljava/lang/reflect/Field;"
        }
    .end annotation

    :try_start_0
    invoke-virtual {p0, p1}, Ljava/lang/Class;->getField(Ljava/lang/String;)Ljava/lang/reflect/Field;

    move-result-object p0
    :try_end_0
    .catch Ljava/lang/NoSuchFieldException; {:try_start_0 .. :try_end_0} :catch_0

    return-object p0

    :catch_0
    new-instance v0, Ljava/lang/AssertionError;

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "No builder field "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p0}, Ljava/lang/Class;->getName()Ljava/lang/String;

    move-result-object p0

    invoke-virtual {v1, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p0, "."

    invoke-virtual {v1, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    invoke-direct {v0, p0}, Ljava/lang/AssertionError;-><init>(Ljava/lang/Object;)V

    throw v0
.end method

.method private static a(Ljava/lang/Class;Ljava/lang/String;Ljava/lang/Class;)Ljava/lang/reflect/Method;
    .locals 3
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/lang/Class<",
            "*>;",
            "Ljava/lang/String;",
            "Ljava/lang/Class<",
            "*>;)",
            "Ljava/lang/reflect/Method;"
        }
    .end annotation

    const/4 v0, 0x1

    :try_start_0
    new-array v0, v0, [Ljava/lang/Class;

    const/4 v1, 0x0

    aput-object p2, v0, v1

    invoke-virtual {p0, p1, v0}, Ljava/lang/Class;->getMethod(Ljava/lang/String;[Ljava/lang/Class;)Ljava/lang/reflect/Method;

    move-result-object p0
    :try_end_0
    .catch Ljava/lang/NoSuchMethodException; {:try_start_0 .. :try_end_0} :catch_0

    return-object p0

    :catch_0
    new-instance v0, Ljava/lang/AssertionError;

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "No builder method "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p0}, Ljava/lang/Class;->getName()Ljava/lang/String;

    move-result-object p0

    invoke-virtual {v1, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p0, "."

    invoke-virtual {v1, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p0, "("

    invoke-virtual {v1, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2}, Ljava/lang/Class;->getName()Ljava/lang/String;

    move-result-object p0

    invoke-virtual {v1, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p0, ")"

    invoke-virtual {v1, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    invoke-direct {v0, p0}, Ljava/lang/AssertionError;-><init>(Ljava/lang/Object;)V

    throw v0
.end method


# virtual methods
.method a(Lcom/czhj/wire/Message$Builder;)Ljava/lang/Object;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(TB;)",
            "Ljava/lang/Object;"
        }
    .end annotation

    :try_start_0
    iget-object v0, p0, Lcom/czhj/wire/FieldBinding;->d:Ljava/lang/reflect/Field;

    invoke-virtual {v0, p1}, Ljava/lang/reflect/Field;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1
    :try_end_0
    .catch Ljava/lang/IllegalAccessException; {:try_start_0 .. :try_end_0} :catch_0

    return-object p1

    :catch_0
    move-exception p1

    new-instance v0, Ljava/lang/AssertionError;

    invoke-direct {v0, p1}, Ljava/lang/AssertionError;-><init>(Ljava/lang/Object;)V

    throw v0
.end method

.method a(Lcom/czhj/wire/Message;)Ljava/lang/Object;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(TM;)",
            "Ljava/lang/Object;"
        }
    .end annotation

    :try_start_0
    iget-object v0, p0, Lcom/czhj/wire/FieldBinding;->c:Ljava/lang/reflect/Field;

    invoke-virtual {v0, p1}, Ljava/lang/reflect/Field;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1
    :try_end_0
    .catch Ljava/lang/IllegalAccessException; {:try_start_0 .. :try_end_0} :catch_0

    return-object p1

    :catch_0
    move-exception p1

    new-instance v0, Ljava/lang/AssertionError;

    invoke-direct {v0, p1}, Ljava/lang/AssertionError;-><init>(Ljava/lang/Object;)V

    throw v0
.end method

.method a(Lcom/czhj/wire/Message$Builder;Ljava/lang/Object;)V
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(TB;",
            "Ljava/lang/Object;",
            ")V"
        }
    .end annotation

    iget-object v0, p0, Lcom/czhj/wire/FieldBinding;->label:Lcom/czhj/wire/WireField$Label;

    invoke-virtual {v0}, Lcom/czhj/wire/WireField$Label;->a()Z

    move-result v0

    if-eqz v0, :cond_0

    invoke-virtual {p0, p1}, Lcom/czhj/wire/FieldBinding;->a(Lcom/czhj/wire/Message$Builder;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Ljava/util/List;

    invoke-interface {p1, p2}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    goto :goto_0

    :cond_0
    iget-object v0, p0, Lcom/czhj/wire/FieldBinding;->a:Ljava/lang/String;

    invoke-virtual {v0}, Ljava/lang/String;->isEmpty()Z

    move-result v0

    if-nez v0, :cond_1

    invoke-virtual {p0, p1}, Lcom/czhj/wire/FieldBinding;->a(Lcom/czhj/wire/Message$Builder;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Ljava/util/Map;

    check-cast p2, Ljava/util/Map;

    invoke-interface {p1, p2}, Ljava/util/Map;->putAll(Ljava/util/Map;)V

    goto :goto_0

    :cond_1
    invoke-virtual {p0, p1, p2}, Lcom/czhj/wire/FieldBinding;->b(Lcom/czhj/wire/Message$Builder;Ljava/lang/Object;)V

    :goto_0
    return-void
.end method

.method a()Z
    .locals 1

    iget-object v0, p0, Lcom/czhj/wire/FieldBinding;->a:Ljava/lang/String;

    invoke-virtual {v0}, Ljava/lang/String;->isEmpty()Z

    move-result v0

    xor-int/lit8 v0, v0, 0x1

    return v0
.end method

.method b()Lcom/czhj/wire/ProtoAdapter;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Lcom/czhj/wire/ProtoAdapter<",
            "*>;"
        }
    .end annotation

    iget-object v0, p0, Lcom/czhj/wire/FieldBinding;->f:Lcom/czhj/wire/ProtoAdapter;

    if-eqz v0, :cond_0

    return-object v0

    :cond_0
    iget-object v0, p0, Lcom/czhj/wire/FieldBinding;->b:Ljava/lang/String;

    invoke-static {v0}, Lcom/czhj/wire/ProtoAdapter;->get(Ljava/lang/String;)Lcom/czhj/wire/ProtoAdapter;

    move-result-object v0

    iput-object v0, p0, Lcom/czhj/wire/FieldBinding;->f:Lcom/czhj/wire/ProtoAdapter;

    return-object v0
.end method

.method b(Lcom/czhj/wire/Message$Builder;Ljava/lang/Object;)V
    .locals 3
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(TB;",
            "Ljava/lang/Object;",
            ")V"
        }
    .end annotation

    :try_start_0
    iget-object v0, p0, Lcom/czhj/wire/FieldBinding;->label:Lcom/czhj/wire/WireField$Label;

    invoke-virtual {v0}, Lcom/czhj/wire/WireField$Label;->c()Z

    move-result v0

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/czhj/wire/FieldBinding;->e:Ljava/lang/reflect/Method;

    const/4 v1, 0x1

    new-array v1, v1, [Ljava/lang/Object;

    const/4 v2, 0x0

    aput-object p2, v1, v2

    invoke-virtual {v0, p1, v1}, Ljava/lang/reflect/Method;->invoke(Ljava/lang/Object;[Ljava/lang/Object;)Ljava/lang/Object;

    goto :goto_0

    :cond_0
    iget-object v0, p0, Lcom/czhj/wire/FieldBinding;->d:Ljava/lang/reflect/Field;

    invoke-virtual {v0, p1, p2}, Ljava/lang/reflect/Field;->set(Ljava/lang/Object;Ljava/lang/Object;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :goto_0
    return-void

    :catchall_0
    move-exception p1

    new-instance p2, Ljava/lang/AssertionError;

    invoke-direct {p2, p1}, Ljava/lang/AssertionError;-><init>(Ljava/lang/Object;)V

    throw p2
.end method

.method c()Lcom/czhj/wire/ProtoAdapter;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Lcom/czhj/wire/ProtoAdapter<",
            "*>;"
        }
    .end annotation

    iget-object v0, p0, Lcom/czhj/wire/FieldBinding;->g:Lcom/czhj/wire/ProtoAdapter;

    if-eqz v0, :cond_0

    return-object v0

    :cond_0
    iget-object v0, p0, Lcom/czhj/wire/FieldBinding;->a:Ljava/lang/String;

    invoke-static {v0}, Lcom/czhj/wire/ProtoAdapter;->get(Ljava/lang/String;)Lcom/czhj/wire/ProtoAdapter;

    move-result-object v0

    iput-object v0, p0, Lcom/czhj/wire/FieldBinding;->g:Lcom/czhj/wire/ProtoAdapter;

    return-object v0
.end method

.method d()Lcom/czhj/wire/ProtoAdapter;
    .locals 2
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Lcom/czhj/wire/ProtoAdapter<",
            "Ljava/lang/Object;",
            ">;"
        }
    .end annotation

    iget-object v0, p0, Lcom/czhj/wire/FieldBinding;->h:Lcom/czhj/wire/ProtoAdapter;

    if-eqz v0, :cond_0

    return-object v0

    :cond_0
    invoke-virtual {p0}, Lcom/czhj/wire/FieldBinding;->a()Z

    move-result v0

    if-eqz v0, :cond_1

    invoke-virtual {p0}, Lcom/czhj/wire/FieldBinding;->c()Lcom/czhj/wire/ProtoAdapter;

    move-result-object v0

    invoke-virtual {p0}, Lcom/czhj/wire/FieldBinding;->b()Lcom/czhj/wire/ProtoAdapter;

    move-result-object v1

    invoke-static {v0, v1}, Lcom/czhj/wire/ProtoAdapter;->newMapAdapter(Lcom/czhj/wire/ProtoAdapter;Lcom/czhj/wire/ProtoAdapter;)Lcom/czhj/wire/ProtoAdapter;

    move-result-object v0

    :goto_0
    iput-object v0, p0, Lcom/czhj/wire/FieldBinding;->h:Lcom/czhj/wire/ProtoAdapter;

    return-object v0

    :cond_1
    invoke-virtual {p0}, Lcom/czhj/wire/FieldBinding;->b()Lcom/czhj/wire/ProtoAdapter;

    move-result-object v0

    iget-object v1, p0, Lcom/czhj/wire/FieldBinding;->label:Lcom/czhj/wire/WireField$Label;

    invoke-virtual {v0, v1}, Lcom/czhj/wire/ProtoAdapter;->withLabel(Lcom/czhj/wire/WireField$Label;)Lcom/czhj/wire/ProtoAdapter;

    move-result-object v0

    goto :goto_0
.end method
